
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string    Name);
        FragTrap(const FragTrap& other);
        FragTrap& operator=(const FragTrap& other);
         ~FragTrap();
        void    highFivesGuys(void);
};

#endif
