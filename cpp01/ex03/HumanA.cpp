#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& A_weapon)
{
    this->name.assign(name);
    this->A_weapon = A_weapon;
};
void    HumanA::attack()
{
    std::cout << name << "attacks with their " << A_weapon.getType();
}