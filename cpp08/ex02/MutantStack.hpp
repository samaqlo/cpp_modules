#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <deque>
#include <stack>


template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        typedef typename Container::iterator iterator;
        MutantStack();
        ~MutantStack();
        MutantStack(const MutantStack<T, Container>& other);
        MutantStack<T, Container>& operator=(const MutantStack<T, Container>& other);
        iterator begin();
        iterator end();
};

#include "MutantStack.tpp"

#endif 