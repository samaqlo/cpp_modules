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
        void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        unsigned int shortestSpan();
        unsigned int longestSpan();
        int size() const;
        int getNum(int index);
};


#endif