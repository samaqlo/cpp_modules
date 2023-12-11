#include "MutantStack.hpp"

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack()
{

}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{

}

template <typename T, typename Container>
T& MutantStack<T, Container>::top()
{
    return (c);
}

template <typename T, typename Container>
bool MutantStack<T, Container>::empty() const
{
    return (Container::empty());
}

template <typename T, typename Container>
size_t MutantStack<T, Container>::size() const
{
    return (Container::size());
}

template <typename T, typename Container>
void MutantStack<T, Container>::push( const T& value )
{
    Container::push_back(value);
}

template <typename T, typename Container>
void MutantStack<T, Container>::pop()
{
    Container::pop_back();
}     

// template<typename T>
// std::deque<T>::iterator MutantStack::begin()
// {
    
// }
