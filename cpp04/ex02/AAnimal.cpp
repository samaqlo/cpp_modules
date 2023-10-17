#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "\033[31mAAnimal Default Constructor called\033[0m" << std::endl;
}

AAnimal::AAnimal(std::string type) : type(type)
{
    std::cout << "\033[31mAAnimal Default Constructor called\033[0m" << std::endl;
} 

AAnimal::~AAnimal()
{
    std::cout << "\033[31mAAnimal Destructor called\033[0m" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
    std::cout << "\033[31mAAnimal Copy Constructor called\033[0m" << std::endl;
    *this = other;
}

AAnimal&     AAnimal::operator=(const AAnimal& other)
{
    std::cout << "\033[31mAAnimal copy assignment operator called\033[0m" << std::endl;
    type.assign(other.type);
    return(*this);
}

void    AAnimal::makeSound()
{
    std::cout << "\033[31mAnimal sound\033[0m" << std::endl;
}
