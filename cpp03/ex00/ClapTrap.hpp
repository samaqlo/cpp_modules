#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string Name;
        int  hit_pt;
        int energie_pt;
        int att_dm;
    public:
        ClapTrap(std::string    name);
        ClapTrap(ClapTrap& const clap);
        ClapTrap& operator=(ClapTrap& const obj);

        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    };

#endif