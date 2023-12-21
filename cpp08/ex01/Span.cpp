#include "Span.hpp"

Span::Span()
{
    this->N = 2;
}

Span::Span(unsigned int N)
{
    this->N = N;
}

Span::Span(const Span & other)
{
    *this = other;
}

Span& Span::operator=(const Span & other)
{
    this->N = other.N;
    vec.resize(other.vec.size());
    std::copy(other.vec.begin(), other.vec.end(), this->vec.begin());
    return (*this);
}

Span::~Span()
{

}

void    Span::addNumber(int elem)
{
    if (vec.size() == N)
        throw(std::length_error("The span is full !!"));
    vec.push_back(elem);
}

unsigned int Span::shortestSpan()
{
    if (vec.size() <= 1)
        throw(std::logic_error("Fill the elements first !!!"));
    unsigned int min_dis = UINT_MAX;
    for (int i = 0; i < (int)vec.size(); i++)
    {
        for (int j = i + 1; j < (int)vec.size(); j++)
        {
            if ((unsigned int)abs(vec[i] - vec[j]) < min_dis)
                min_dis = abs(vec[i] - vec[j]);
        }
    }
    return (min_dis);    
}

unsigned int Span::longestSpan()
{
    if (vec.size() <= 1)
        throw(std::logic_error("Fill the elements first !!!"));
    std::vector<int>::iterator it_max = std::max_element(vec.begin(), vec.end());
    std::vector<int>::iterator it_min = std::min_element(vec.begin(), vec.end());
    return (*it_max - *it_min);
}

void    Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (vec.size() + std::distance(begin, end) > N)
    {
        vec.insert(vec.end(), begin, end - (std::distance(begin, end) + vec.size() - N));
        throw(std::length_error("The span is full !!"));
    }
    vec.insert(vec.end(), begin, end);
}

int Span::size() const
{
    return (vec.size());
}

int Span::getNum(int index)
{
    return (vec[index]);
}