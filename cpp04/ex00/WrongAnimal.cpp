#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "\033[38;5;208mWrongAnimal Default Constructor called\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
    std::cout << "\033[38;5;208mWrongAnimal Default Constructor called\033[0m" << std::endl;
} 

WrongAnimal::~WrongAnimal()
{
    std::cout << "\033[38;5;208mWrongAnimal Destructor called\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << "\033[38;5;208mWrongAnimal Copy Constructor called\033[0m" << std::endl;
    *this = other;
}

WrongAnimal&     WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "\033[38;5;208mWrongAnimal copy assignment operator called\033[0m" << std::endl;
    type.assign(other.type);
    return(*this);
}

void    WrongAnimal::makeSound()
{
    std::cout << "\033[38;5;208m!!! WrongAnimal sound !!!\033[0m" << std::endl;
}
