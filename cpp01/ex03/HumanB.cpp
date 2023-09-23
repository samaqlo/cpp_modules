#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name.assign(name);
};

void    HumanB::setWeapon(Weapon& B_weapon)
{
    this->B_weapon = &B_weapon;
}

void    HumanB::attack()
{
    std::cout << name << " attacks with their " << B_weapon->getType() << std::endl;
}