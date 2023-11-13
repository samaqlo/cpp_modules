#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

typedef struct Data
{
    int x;
    int y;
} Data;

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