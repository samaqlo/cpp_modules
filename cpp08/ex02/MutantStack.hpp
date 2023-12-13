#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <deque>
#include <stack>

#define s_iterator typename Container::iterator
#define rs_iterator typename Container::reverse_iterator

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        MutantStack();
        ~MutantStack();
        MutantStack(const MutantStack<T, Container>& other);
        MutantStack<T, Container>& operator=(const MutantStack<T, Container>& other);
        s_iterator begin();
        s_iterator end();
        rs_iterator rbegin();
        rs_iterator rend();
};

#include "MutantStack.tpp"

#endif