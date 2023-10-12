#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "\033[31mDefault constructor called base\033[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :  Name(name)
{
    std::cout << "\033[31mConstructor called\033[0m" << std::endl;
    hit_pt = 10;
    energie_pt = 10;
    att_dm = 0;
}

ClapTrap::ClapTrap(const ClapTrap&  clap)
{
    std::cout << "\033[31mCopy Constructor called\033[0m" << std::endl;
    *this = clap;
}

ClapTrap::~ClapTrap()
{
    std::cout << "\033[31mDestructor called base\033[0m" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap&  obj)
{
    std::cout << "\033[31mCopy assignment operator called\033[0m" << std::endl;
    Name.assign(obj.Name);
    hit_pt = obj.hit_pt;
    energie_pt = obj.energie_pt;
    att_dm = obj.att_dm;

    return (*this);   
}

void ClapTrap::attack(const std::string& target)
{
    if (!energie_pt || !hit_pt)
        return;
    energie_pt--;
    std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << att_dm << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_pt - amount <= 0)
        return;
    hit_pt -= amount;
    std::cout << "ClapTrap " << Name << "has taken " << amount << "of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!energie_pt)
        return;
    hit_pt += amount;
    energie_pt--;
    std::cout << "ClapTrap " << Name << "has repered " << amount << "of his energie point!" << std::endl;
}   
