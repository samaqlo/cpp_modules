#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "\033[31mAnimal Default Constructor called\033[0m" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
    std::cout << "\033[31mAnimal Default Constructor called\033[0m" << std::endl;
} 

Animal::~Animal()
{
    std::cout << "\033[31mAnimal Destructor called\033[0m" << std::endl;
}

Animal::Animal(const Animal& other)
{
    std::cout << "\033[31mAnimal Copy Constructor called\033[0m" << std::endl;
    *this = other;
}

Animal&     Animal::operator=(const Animal& other)
{
    std::cout << "\033[31mAnimal copy assignment operator called\033[0m" << std::endl;
    type.assign(other.type);
    return(*this);
}

void    Animal::makeSound()
{
    std::cout << "\033[31mAnimal sound\033[0m" << std::endl;
}
