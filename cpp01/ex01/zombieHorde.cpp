#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zmb;

    if (name.size() == 0 || N <= 0)
        return (NULL);
    zmb = new Zombie[N];
    for (int i = 0; i < N; i++)
        zmb[i].set_name(name);
    return (zmb);
}