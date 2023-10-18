#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria Default constractor called" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria Destractor called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
    std::cout << "AMateria constractor called" << std::endl;
    this->type.assign(type);
}

AMateria::AMateria(const AMateria& other)
{
    std::cout << "AMateria Copy constractor called" << std::endl;
    *this = other;
}

AMateria& AMateria::operator=(const AMateria& other)
{
    std::cout << "Copy assignement constractor called" << std::endl;
    type.assign(other.type);
    return (*this);
}

std::string const & AMateria::getType() const
{
    return (type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "AMateria use function on target : " << target.getName() << std::endl;
}
