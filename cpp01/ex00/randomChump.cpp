#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie new_one(name);

    new_one.announce();
}