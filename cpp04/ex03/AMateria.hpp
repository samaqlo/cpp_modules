#ifndef AAMATERIA_HPP
#define AAMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"
class ICharacter;
class AMateria
{
    protected:
        std::string type;
    public:
        AMateria(std::string const & type);
        AMateria();
        virtual ~AMateria();
        AMateria(const AMateria& other);
        AMateria& operator=(const AMateria& other);
    
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif