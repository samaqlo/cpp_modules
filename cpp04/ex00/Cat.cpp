
#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "\033[34;40mCat Default constructor called\033[0m" << std::endl;

}

Cat::Cat(const Cat& other) 
{
    std::cout << "\033[34;40mCat Copy constructor\033[0m" << std::endl;
    *this = other;
}

Cat& Cat::operator=(const Cat& other) 
{
    std::cout << "\033[34;40mCat Copy assignment operator called\033[0m" << std::endl;

    this->type = other.type;
    return (*this);
}

Cat::~Cat() 
{
    std::cout << "\033[34;40mCat Destructor called\033[0m" << std::endl;
}

void    Cat::makeSound()
{
    std::cout << "\033[34;40m!!! Cat Sound !!!\033[0m" << std::endl;
}