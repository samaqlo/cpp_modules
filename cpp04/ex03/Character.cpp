
#include "Character.hpp"

Character::Character() 
{
    std::cout << "Character Default constructor called" << std::endl;
    name.assign("default");
    for (int i = 0; i < 4; i++)
       inventory[i] = NULL;
    for (int i = 0; i < 1024; i++)
        left_on_floor[i] = NULL;
    
}

Character::Character(std::string name) 
{
    std::cout << "Character constructor called" << std::endl;
    this->name.assign(name);
    for (int i = 0; i < 4; i++)
       inventory[i] = NULL;
    for (int i = 0; i < 1024; i++)
        left_on_floor[i] = NULL;
}

Character::Character(const Character& other) 
{
    std::cout << "Character Copy constructor" << std::endl;
    *this = other;
}

Character& Character::operator=(const Character& other) 
{
    std::cout << "Character Copy assignment operator called" << std::endl;

    name.assign(other.name);
    for (int i = 0; i < 4; i++)
    {
        delete inventory[i];
        if (other.inventory[i])
            inventory[i] = other.inventory[i]->clone();
    }
    
    return (*this);
}

Character::~Character() 
{
    std::cout << "Character Destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        delete inventory[i];
    for (int i = 0; i < 1024; i++)
    {
        if (!left_on_floor[i])
            break;
        delete left_on_floor[i];
    }
    
}

std::string const & Character::getName() const
{
    return (name);
}

void Character::equip(AMateria* m)
{
    if (!m)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] == NULL)
        {
            inventory[i] = m;
            return;
        }
    }
    std::cerr << "inventory is full" << std::endl;
}

void Character::unequip(int idx)
{
    if (idx > 3 || idx < 0)
    {
        std::cout << "index  out of the range" << std::endl;
        return ;
    }
    if (inventory[idx] == NULL)
    {
        std::cout << "Empty!!" << std::endl;
        return ;
    }
    int i = 0;
    while(left_on_floor[i])
        i++;
    left_on_floor[i] = inventory[idx];
    inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx > 3 || idx < 0)
    {
        std::cerr << "index  out of the range" << std::endl;
        return ;
    }
    if (inventory[idx])
        inventory[idx]->use(target);
    else
        std::cerr << "Materia not set" << std::endl;
}
