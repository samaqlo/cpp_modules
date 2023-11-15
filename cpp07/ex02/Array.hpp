#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
    private:

        T   *array;
        unsigned int _size;

    public:

        Array();
        ~Array();
        Array(unsigned int n);
        Array(const Array<T>& other);
        Array<T>& operator=(const Array<T>& other);
        T& operator[](int index);
        unsigned int size() const;
};

#include "Array.tpp"

#endif