#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <unistd.h>

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

Zombie* zombieHorde( int N, std::string name );

#endif 