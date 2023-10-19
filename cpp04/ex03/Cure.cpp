
#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "\033[32mCure Default constructor called\033[0m" << std::endl;
}

Cure::Cure(const Cure& other) 
{
    std::cout << "\033[32mCure Copy constructor\033[0m" << std::endl;
    *this = other;
}

Cure& Cure::operator=(const Cure& other) 
{
    std::cout << "\033[32mCure Copy assignment operator called\033[0m" << std::endl;
    this->type = other.type;
    return (*this);
}

Cure::~Cure() 
{
    std::cout << "\033[32mCure Destructor called\033[0m" << std::endl;
}

void    Cure::use(ICharacter& target)
{
    std::cout << "\033[32m* heals " << target.getName() << "’s wounds *\033[0m" << std::endl;
}

AMateria* Cure::clone() const
{
    AMateria *newmateria = new Cure(*this);

    return (newmateria);
}