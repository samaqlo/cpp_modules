#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class   HumanA
{
    private:
        std::string name;
        Weapon& A_weapon;
    public:
        HumanA();
        HumanA(std::string name, Weapon& A_weapon);
        
        void    attack();
};

#endif