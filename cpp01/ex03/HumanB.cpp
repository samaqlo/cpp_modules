#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name.assign(name);
    this->B_weapon = NULL;
}

void    HumanB::setWeapon(Weapon& B_weapon)
{
    this->B_weapon = &B_weapon;
}

void    HumanB::attack()
{
    if(!B_weapon)
        return ;
    std::cout << name << " attacks with their " << B_weapon->getType() << std::endl;
}