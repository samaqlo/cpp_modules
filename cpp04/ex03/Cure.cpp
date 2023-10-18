
#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure Default constructor called" << std::endl;
}

Cure::Cure(const Cure& other) 
{
    std::cout << "Cure Copy constructor" << std::endl;
    *this = other;
}

Cure& Cure::operator=(const Cure& other) 
{
    std::cout << "Cure Copy assignment operator called" << std::endl;
    this->type = other.type;
    return (*this);
}

Cure::~Cure() 
{
    std::cout << "Cure Destructor called" << std::endl;
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
    AMateria *newmateria = new Cure(*this);

    return (newmateria);
}