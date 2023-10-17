#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(std::string type);
        virtual ~AAnimal();
        AAnimal(const AAnimal& other);
        AAnimal& operator=(const AAnimal& other);
        virtual void    makeSound() = 0;
};

#endif