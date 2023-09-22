#include "Zombie.hpp"

Zombie* newZombie(std::string  name)
{
    Zombie* zmb = new Zombie;

    zmb->set_name(name);
    return (zmb);
}