
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() 
{
    std::cout << "\033[33mDiamondTrap Default constructor called\033[0m" << std::endl;
    name.assign(Name);
    hit_pt = 100;
    att_dm = 30;
}

DiamondTrap::DiamondTrap(std::string Name) : ClapTrap(Name + "_clap_name")
{
    std::cout << "\033[33mDiamondTrap constructor called\033[0m" << std::endl;
    name.assign(Name);
    hit_pt = 100;
    att_dm = 30;
    std::cout << this->hit_pt << " " << this->energie_pt << " " << att_dm << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
    std::cout << "\033[33mDiamondTrap Copy constructor\033[0m" << std::endl;
    *this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
    std::cout << "\033[33mDiamondTrap Copy assignment operator called\033[0m" << std::endl;
    hit_pt = other.hit_pt;
    att_dm = other.att_dm;
    energie_pt = other.energie_pt;
    return *this;
}

DiamondTrap::~DiamondTrap() 
{
    std::cout << "\033[33mDiamondTrap Destructor called\033[0m" << std::endl;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name : " << name << " ClapTrap name : " << Name << std::endl;
}