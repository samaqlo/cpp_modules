
#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat Default constructor called" << std::endl;

}

Cat::Cat(const Cat& other) 
{
    std::cout << "Cat Copy constructor" << std::endl;
    *this = other;
}

Cat& Cat::operator=(const Cat& other) 
{
    std::cout << "Cat Copy assignment operator called" << std::endl;

    this->type = other.type;
    return (*this);
}

Cat::~Cat() 
{
    std::cout << "Cat Destructor called" << std::endl;
}

void    Cat::makeSound()
{
    std::cout << "!!! meow !!!" << std::endl;
}