#pragma once 

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <set>

class PmergeMe
{
    private:
        std::vector<std::pair<int, int> > vc_seq;
        std::deque<std::pair<int,int> >  dq_seq;
        std::pair<bool, int> strugler;
     public:
        // ~PmergeMe();
        PmergeMe()
        {

        }
        // PmergeMe(std::vector<std::pair<int, int>>);
        void    parser(int ac, char **av);
        void     print_vec();
        void    insertion();
        std::vector<int>    merge();
        typedef std::vector<std::pair<int, int> >::iterator vc_iterator; 
        typedef std::deque<std::pair<int, int> >::iterator dq_iterator; 
};