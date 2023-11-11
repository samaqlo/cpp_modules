#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

typedef struct DATA
{
    int x;
    int y;
} DATA;

class Serializer
{
    private:
        Serializer();
        ~Serializer();
        Serializer(const Serializer& other);
        Serializer& operator=(const Serializer& other);
    public:
       static uintptr_t serialize(Data* ptr);
       static Data* deserialize(uintptr_t raw);
};

#endif