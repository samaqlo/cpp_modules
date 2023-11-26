#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void    print_elem(T elem)
{
    std::cout << elem <<  ", ";
}

template <typename T, typename U>
void    iter(T* ptr, int len, U func)
{
    for(int i = 0; i < len; i++)
        func(ptr[i]);
}

#endif