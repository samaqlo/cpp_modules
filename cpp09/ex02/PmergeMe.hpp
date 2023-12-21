#pragma once 

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <set>
#include <chrono>
#include <ctime>

void    validator(std::string input);

class PmergeMe
{
    private:
        std::vector<std::pair<int, int> > vc_seq;
        std::deque<std::pair<int,int> >  dq_seq;
        std::vector<int> Jacobsthal_num;
        std::vector<int> main_chain;
        std::pair<bool, int> strugler;
     public:
        // ~PmergeMe();
        std::vector<int>    Jacobsthal_Generate(int size);
        PmergeMe()
        {

        }
        void vc_parser(int ac, char **av);
        void dq_parser(int ac, char **av);
        std::vector<int>    vc_merge();
        std::deque<int>    dq_merge();
        void    vc_insertion();
        void    dq_insertion();
        void     print_Before(int ac, char **av);
        void     print_after();
        typedef std::vector<std::pair<int, int> >::iterator vc_iterator;
        typedef std::deque<std::pair<int, int> >::iterator dq_iterator;
};





    //     template <typename C, typename T>
    //     T    merge(C Container)
    //     {
    //         T main_chain;
    //         typename C::iterator it;

    //         main_chain.push_back(Container.at(0).second);
    //         for (it = Container.begin(); it < Container.end() ; it++)
    //         {
    //             main_chain.push_back(it->first);
    //         }
    //         return (main_chain);
    //     }

    //     template <typename C, typename T>
    //     void    insertion(C Container)
    //     {
    //         std::vector<int> Jacobsthal_num = Jacobsthal_Generate(Container.size());
    //         T main_chain = merge<C,T>(Container);

    //         typename T::iterator it;

    //         for(int i = 0; i < Jacobsthal_num.size() ; i++)
    //         {
    //             if (Jacobsthal_num[i] - 1 >= Container.size())
    //                 continue;
    //             it = std::lower_bound(main_chain.begin(), main_chain.end(), Container.at(Jacobsthal_num[i] - 1).second);
    //             main_chain.insert(it, Container.at(Jacobsthal_num[i] - 1).second );
    //         }
    //         if (strugler.first)
    //             main_chain.insert(std::lower_bound(main_chain.begin(), main_chain.end(), strugler.second), strugler.second);
    //         std::cout << std::is_sorted(main_chain.begin(), main_chain.end()) << std::endl;
    //         // for (it = main_chain.begin(); it < main_chain.end(); it++)
    //         // {
    //         //     std::cout << "[" << *it << "]";
    //         // }
    //         // std::cout << std::endl;
    //     }

    //     template <typename T, typename C>
    //     void   parser(T Conatainer,int ac, char **av)
    //     {
    //         strugler.first = false;
    //         std::pair<int , int> pr;

    //         for (int i = 1; i < ac ; i += 2)
    //         {
    //             if (!av[i + 1] && (ac - 1)%2)
    //                 strugler = std::make_pair(true, atoi(av[i]));
    //             else
    //             {
    //                 validator(av[i]);
    //                 validator(av[i + 1]);
    //                 pr = std::make_pair(atoi(av[i]), atoi(av[i + 1]));
    //                 if (pr.first < pr.second)
    //                     std::swap(pr.first, pr.second);
    //                 Conatainer.push_back(pr);
    //             }
    //         }
    //     std::sort(Conatainer.begin(), Conatainer.end());
    //     insertion<T,C>(Conatainer);
    // // print_vec();
    //     } 