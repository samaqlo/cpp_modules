#include "Zombie.hpp"

int main()
{
    Zombie* ok;

    ok = newZombie("Zombie one");
    ok->announce();
    randomChump("Zombie two");
    delete ok;
}