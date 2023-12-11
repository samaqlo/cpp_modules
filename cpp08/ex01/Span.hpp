#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:
        unsigned int N;
        std::vector<int>    vec;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span & other);
        Span& operator=(const Span & other);
        ~Span();
        void addNumber(int elem);
        void addNumbers(std::vector<int> & seq);
        unsigned int shortestSpan();
        unsigned int longestSpan();
        void print_size();
        int size();
        int getNum(int index);

        template < typename Container >
        void	fillNumbers(const typename Container::iterator &begin, const typename Container::iterator &end )
        {
            for (typename Container::iterator i = begin; i != end; i++)
            {
                    this->addNumber(*i);    
            }
        }
};


#endif