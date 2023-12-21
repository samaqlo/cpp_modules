#include "PmergeMe.hpp"

void      PmergeMe::print_vec()
{

    for (vc_iterator it = vc_seq.begin(); it < vc_seq.end(); it++)
    {
        std::cout << "[" << it->first << " , " << it->second << "]" << std::endl;
    }
    // for (dq_iterator it = dq_seq.begin(); it < dq_seq.end(); it++)
    // {
    //     std::cout << "[" << it->first << " , " << it->second << "]" << std::endl;
    // }
    if (strugler.first)
        std::cout << strugler.second << std::endl;
}

void    validator(std::string input)
{
    if (input.find_first_not_of("0123456789") != input.npos)
        throw (std::logic_error("Envalid input !!!"));
}

void   PmergeMe::parser(int ac, char **av)
{
    strugler.first = false;
    std::pair<int , int> pr;

    for (int i = 1; i < ac ; i += 2)
    {
        validator(av[i]);
        if (!av[i + 1] && (ac - 1)%2)
            strugler = std::make_pair(true, atoi(av[i]));
        else
        {
            pr = std::make_pair(atoi(av[i]), atoi(av[i + 1]));
            if (pr.first < pr.second)
                std::swap(pr.first, pr.second);
            vc_seq.push_back(pr);
            dq_seq.push_back(pr);
        }
    }
    std::sort(vc_seq.begin(), vc_seq.end());
    std::sort(dq_seq.begin(), dq_seq.end());
    insertion();
    print_vec();
} 

unsigned int j(int n)
{
    if (!n)
        return (0);
    if (n == 1)
        return (1);
    int prev = 0, cur = 1, tmp;
    for (int i = 2; i <= n ; ++i)
    {
        tmp = cur;      
        cur += 2*prev; 
        prev = tmp;
    }
    return (cur);
}

std::vector<int>    Jacobsthal_Generate(int size)
{
    std::vector<int>    jacob;
    std::vector<int>    co_jacob;
    int i = 2;
    int ret = 0;

    while(ret <= size)
    {
        ret = j(i);
        jacob.push_back(ret);
        i++;
    }
    for (int i = 0; i < jacob.size() && jacob[i + 1]; i++)
    {
        for (int j = jacob[i + 1] ; j > jacob[i]; j--)
        {
            co_jacob.push_back(j);
        }
    }
    return (co_jacob);
}

std::vector<int>    PmergeMe::merge()
{
    std::vector<int> main_chain;

    main_chain.push_back(vc_seq.at(0).second);
    for (vc_iterator it = vc_seq.begin(); it < vc_seq.end() ; it++)
    {
        main_chain.push_back(it->first);
    }
    return (main_chain);
}

void    PmergeMe::insertion()
{
    std::vector<int> Jacobsthal_num = Jacobsthal_Generate(vc_seq.size());
    std::vector<int> main_chain = merge();
    std::vector<int>::iterator it;

    for(int i = 0; i < Jacobsthal_num.size() ; i++)
    {
        if (Jacobsthal_num[i] - 1 >= vc_seq.size())
            continue;
        it = std::lower_bound(main_chain.begin(), main_chain.end(), vc_seq.at(Jacobsthal_num[i] - 1).second);
        main_chain.insert(it, vc_seq.at(Jacobsthal_num[i] - 1).second );
    }
}