#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void    print_elem(T elem)
{
    std::cout << elem <<  ", ";
}

template <typename T>
void    iter(T* ptr, int len, void (*func)(T elem))
{
    for(int i = 0; i < len; i++)
        func(ptr[i]);
}

#endif