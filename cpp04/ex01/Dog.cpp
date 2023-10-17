
#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "\033[32mDog Default constructor called\033[0m" << std::endl;
    dog_brain = new Brain;
}

Dog::Dog(const Dog& other) 
{
    std::cout << "\033[32mDog Copy constructor\033[0m" << std::endl;
    *this = other;
}

Dog& Dog::operator=(const Dog& other) 
{
    std::cout << "\033[32mDogCopy assignment operator called\033[0m" << std::endl;
    type = other.type;
    dog_brain = other.dog_brain;
    return (*this);
}

Dog::~Dog() 
{
    std::cout << "\033[32mDog Destructor called\033[0m" << std::endl;
    delete dog_brain;
}

void    Dog::makeSound()
{
    std::cout << "\033[32m!!! Dog Sound !!!\033[0m" << std::endl;
}
