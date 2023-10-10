#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) :  Name(name)
{
    hit_pt = 10;
    energie_pt = 10;
    att_dm = 0;
}

ClapTrap::ClapTrap(ClapTrap& const clap)
{
    *this = clap;
}

ClapTrap& ClapTrap::operator=(ClapTrap& const obj)
{
    Name.assign(obj.Name);
    hit_pt = obj.hit_pt;
    energie_pt = obj.energie_pt;
    att_dm = obj.att_dm;

    return (*this);   
}
void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << Name << "attacks " << target << ", causing " << att_dm << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    hit_pt--;
    std::cout << "ClapTrap " << Name << "has taken " << amount << "of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    hit_pt++;
    energie_pt--;
    std::cout << "ClapTrap " << Name << "has repered " << amount << "of his energie point!" << std::endl;
}   
