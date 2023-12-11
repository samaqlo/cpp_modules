#include "Span.hpp"
Span::Span()
{
    
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
    std::vector<int>::iterator it_min = std::min_element(vec.begin(), vec.end());
    int min = *it_min;
    vec.erase(it_min);
    std::vector<int>::iterator it_min_2 = std::min_element(vec.begin(), vec.end());
    vec.insert(it_min, min);
    if (it_min == vec.end() - 1)
        return (*it_min_2 - *it_min);
    return (*(++it_min_2) - *it_min);
}

unsigned int Span::longestSpan()
{
    if (vec.size() <= 1)
        throw(std::logic_error("Fill the elements first !!!"));
    std::vector<int>::iterator it_max = std::max_element(vec.begin(), vec.end());
    std::vector<int>::iterator it_min = std::min_element(vec.begin(), vec.end());
    return (*it_max - *it_min);
}

void    Span::addNumbers(std::vector<int> & seq)
{
    if (vec.size() + seq.size() > N)
        throw(std::length_error("The span is full !!"));
    vec.insert(vec.end(), seq.begin(), seq.end());
}

void Span::print_size()
{
    std::cout << vec.size() << std::endl;
}

int Span::size()
{
    return (vec.size());
}

int Span::getNum(int index)
{
    return (vec[index]);
}