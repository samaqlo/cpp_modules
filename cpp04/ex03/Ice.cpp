
#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice Default constructor called" << std::endl;
}

Ice::Ice(const Ice& other) 
{
    std::cout << "Ice Copy constructor" << std::endl;
    *this = other;
}

Ice& Ice::operator=(const Ice& other)
{
    std::cout << "IceCopy assignment operator called" << std::endl;
    this->type = other.type;
    return (*this);
}

Ice::~Ice() 
{
    std::cout << "Ice Destructor called" << std::endl;
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}

AMateria* Ice::clone() const
{
    AMateria *newmateria = new Ice(*this);

    return (newmateria);
}