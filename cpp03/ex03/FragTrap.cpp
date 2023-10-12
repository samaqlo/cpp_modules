
#include "FragTrap.hpp"

FragTrap::FragTrap() 
{
    std::cout << "\033[32mFragTrap Default constructor called\033[0m" << std::endl;
    hit_pt = 100;
    energie_pt = 100;
    att_dm = 50;
}

FragTrap::FragTrap(const FragTrap& other) 
{
    std::cout  << "\e[1m" << "\033[32mFragTrap Copy constructo called\033[0m"<< "\e[0m" << std::endl;
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other) 
{
    std::cout << "\e[1m" << "\033[32mFragTrap Copy assignment operator called\033[0m"<< "\e[0m" << std::endl;
    Name = other.Name;
    hit_pt = other.hit_pt;
    energie_pt = other.energie_pt;
    att_dm = other.att_dm;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "\e[1m" << "\033[32mFragTrap Destructor called\033[0m"<< "\e[0m" << std::endl;
}

FragTrap::FragTrap(std::string    Name) : ClapTrap(Name)
{
    std::cout << "\e[1m\033[32mFragTrap constructor called\033[0m" << std::endl;
    hit_pt = 100;
    energie_pt = 100;
    att_dm = 50;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "high five guys" << std::endl;
}
