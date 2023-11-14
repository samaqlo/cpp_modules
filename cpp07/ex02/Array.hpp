#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
    private:

        T   *array;
        unsigned int size;

    public:

        Array()
        {
            size = 1;
            array = new T[size];
        };
        Array(unsigned int n)
        {
            size = n;
            this->array = new T[size];
        };
        Array(const Array& other)
        {
            *this = other;
        };
        Array& operator=(const Array& other)
        {
            size = other.size;
            array = new T[other.size];
            for (int i = 0; i < (int)other.size; i++)
                array[i] = other.array[i];
            return(*this);
        }
        R& T::operator[](S b)
        {
            
        }
        void     set_array(T content)
        {
            for (int i = 0; i < (int)size; i++)
                array[i] = content;
        }
        void     get_array()
        {
            for (int i = 0; i < (int)size; i++)
              std::cout <<  array[i] << ", ";
            std::cout << std::endl;
        }


};

#endif