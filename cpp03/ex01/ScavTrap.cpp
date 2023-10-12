#include "ScavTrap.hpp"

ScavTrap::ScavTrap() 
{
    std::cout << "\033[34;40m" << "\e[1m" << "ScavTrap Default constructor called"<< "\e[0m" << std::endl;
    hit_pt = 100;
    energie_pt = 50;
    att_dm = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "\033[34;40m" << "\e[1m" << "ScavTrap parametred constructor call" << "\e[0m" << std::endl;
    hit_pt = 100;
    energie_pt = 50;
    att_dm = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) 
{
    std::cout << "\033[34;40m" << "\e[1m" << "ScavTrap Copy constructor" << "\e[0m" << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) 
{
    std::cout << "\033[34;40m" << "\e[1m" << "ScavTrap Copy assignment operator called" << "\e[0m" << std::endl;
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
    std::cout << "\033[34;40m" << "\e[1m" << "ScavTrap Destructor called" << "\e[0m" << std::endl;
}
