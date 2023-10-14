
#include "Dog.hpp"

Dog::Dog() 
{
    std::cout << "Dog Default constructor called" << std::endl;

}

Dog::Dog(const Dog& other) 
{
    std::cout << "Dog Copy constructor" << std::endl;
    *this = other;
}

Dog& Dog::operator=(const Dog& other) 
{
    std::cout << "DogCopy assignment operator called" << std::endl;

    return (*this);
}

Dog::~Dog() 
{
    std::cout << "Dog Destructor called" << std::endl;
}
