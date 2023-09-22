#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class   HumanB
{
    private:
        std::string name;
        Weapon* B_weapon;
    public:
        HumanB(std::string name);
        void    attack();
        void    setWeapon(Weapon B_weapon);
};

#endif