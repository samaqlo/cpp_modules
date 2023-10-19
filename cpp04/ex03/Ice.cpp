
#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "\033[36mIce Default constructor called\033[0m" << std::endl;
}

Ice::Ice(const Ice& other) 
{
    std::cout << "\033[36mIce Copy constructor\033[0m" << std::endl;
    *this = other;
}

Ice& Ice::operator=(const Ice& other)
{
    std::cout << "\033[36mIce Copy assignment operator called\033[0m" << std::endl;
    this->type = other.type;
    return (*this);
}

Ice::~Ice() 
{
    std::cout << "\033[36mIce Destructor called\033[0m" << std::endl;
}

void    Ice::use(ICharacter& target)
{
    std::cout << "\033[36m* shoots an ice bolt at " << target.getName() << "*\033[0m" << std::endl;
}

AMateria* Ice::clone() const
{
    AMateria *newmateria = new Ice(*this);

    return (newmateria);
}