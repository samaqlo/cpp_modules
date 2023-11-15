#include "Array.hpp"

template<typename T>
Array<T>::Array()
{
    _size = 1;
    array = new T[_size];
}
template<typename T>
Array<T>::~Array()
{
    delete [] array;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
    _size = n;
    this->array = new T[_size];
}

template<typename T>
Array<T>::Array(const Array<T>& other)
{
    *this = other;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
    _size = other._size;
    std::cout << _size << std::endl;
    delete [] array;
    array = new T[other._size];
    for (int i = 0; i < (int)other._size; i++)
        array[i] = other.array[i];
    return(*this);
}

template<typename T>
T& Array<T>::operator[](int index)
{
    if (index >= (int)_size || index < 0)
        throw (std::out_of_range("Index out of the range"));
    return(array[index]);
}

template<typename T>
unsigned int Array<T>::size() const
{
    return (_size);
}
