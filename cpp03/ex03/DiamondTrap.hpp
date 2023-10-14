
#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap , public ScavTrap
{
    private:
        std::string Name;

    public:
        DiamondTrap();
        DiamondTrap(const DiamondTrap& other);
        DiamondTrap(std::string Name);
        DiamondTrap& operator=(const DiamondTrap& other);
        ~DiamondTrap();
        void whoAmI();
};

#endif
