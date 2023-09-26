#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& A_weapon) : A_weapon(A_weapon)
{
    this->name.assign(name);
};
void    HumanA::attack()
{
    std::cout << name << " attacks with their " << A_weapon.getType() << std::endl;
} 