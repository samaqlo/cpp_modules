#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string Name;
        int  hit_pt;
        int energie_pt;
        int att_dm;
    public:
        ClapTrap();
        ClapTrap(std::string    name);
        ClapTrap(const ClapTrap& clap);
        ClapTrap& operator=(const ClapTrap& obj);

        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    };

#endif