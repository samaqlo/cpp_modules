#include "Zombie.hpp"

int main()
{
    Zombie* p_Zombie;

    p_Zombie = zombieHorde(5, "samaqlo");
    if (!p_Zombie)
        return (1);
    for (int i = 0; i < 5; i++)
        p_Zombie[i].announce();

    delete [] p_Zombie;
}