#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void announce( void );
        void set_name(std::string name);
        std::string get_name() const;
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif 