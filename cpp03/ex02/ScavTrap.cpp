#include "ScavTrap.hpp"

ScavTrap::ScavTrap() 
{
    std::cout << "\e[1m" << "\033[34;40mScavTrap Default constructor called"<< "\e[0m" << std::endl;
    hit_pt = 100;
    energie_pt = 50;
    att_dm = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout <<  "\e[1m" << "\033[34;40mScavTrap constructor called" << "\e[0m" << std::endl;
    hit_pt = 100;
    energie_pt = 50;
    att_dm = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) 
{
    std::cout << "\e[1m" << "\033[34;40mScavTrap Copy constructor called" << "\e[0m" << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) 
{
    std::cout << "\e[1m" << "\033[34;40mScavTrap Copy assignment operator called" << "\e[0m" << std::endl;
    this->Name =  other.Name;
    this->att_dm = other.att_dm;
    this->energie_pt = other.energie_pt;
    this->hit_pt = other.hit_pt;
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << " ScavTrap " << Name << " is now in Gate keeper mode. " << std::endl;
}

ScavTrap::~ScavTrap() 
{
    std::cout << "\e[1m" << "\033[34;40mScavTrap Destructor called" << "\e[0m" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (!energie_pt || !hit_pt)
        return;
    energie_pt--;
    std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << att_dm << " points of damage!" << std::endl;
}
