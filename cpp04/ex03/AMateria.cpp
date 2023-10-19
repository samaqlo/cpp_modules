#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "\033[31mAMateria Default constractor called\033[0m" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "\033[31mAMateria Destractor called\033[0m" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
    std::cout << "\033[31mAMateria constractor called\033[0m" << std::endl;
    this->type.assign(type);
}

AMateria::AMateria(const AMateria& other)
{
    std::cout << "\033[31mAMateria Copy constractor called\033[0m" << std::endl;
    *this = other;
}

AMateria& AMateria::operator=(const AMateria& other)
{
    std::cout << "\033[31mCopy assignement constractor called\033[0m" << std::endl;
    type.assign(other.type);
    return (*this);
}

std::string const & AMateria::getType() const
{
    return (type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "\033[31mAMateria use function on target : " << target.getName() << "\033[0m" << std::endl;
}
