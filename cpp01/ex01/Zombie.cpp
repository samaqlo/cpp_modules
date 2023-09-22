#include "Zombie.hpp"

void    Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::set_name(std::string name)
{
    this->name.assign(name);
}

Zombie::Zombie()
{
 
};
std::string Zombie::get_name() const
{
    return (name);
}

Zombie::Zombie(std::string name)
{
    this->name.assign(name);
};
Zombie::~Zombie()
{
    std::cout << "Destructor : " << name << " destroyed" << std::endl;
};
