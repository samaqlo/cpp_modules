
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "\033[33mWrongCat Default constructor called\033[0m" << std::endl;

}

WrongCat::WrongCat(const WrongCat& other) 
{
    std::cout << "\033[33mWrongCat Copy constructor\033[0m" << std::endl;
    *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other) 
{
    std::cout << "\033[33mWrongCat Copy assignment operator called\033[0m" << std::endl;

    this->type = other.type;
    return (*this);
}

WrongCat::~WrongCat() 
{
    std::cout << "\033[33mWrongCat Destructor called\033[0m" << std::endl;
}

void    WrongCat::makeSound()
{
    std::cout << "\033[33m!!! WrongCat Sound !!!\033[0m" << std::endl;
}