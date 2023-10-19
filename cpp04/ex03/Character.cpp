
#include "Character.hpp"

Character::Character() 
{
    std::cout << "\033[33mCharacter Default constructor called\033[0m" << std::endl;
    name.assign("default");
    for (int i = 0; i < 4; i++)
       inventory[i] = NULL;
    for (int i = 0; i < 1024; i++)
        left_on_floor[i] = NULL;
    
}

Character::Character(std::string name) 
{
    std::cout << "\033[33mCharacter constructor called\033[0m" << std::endl;
    this->name.assign(name);
    for (int i = 0; i < 4; i++)
       inventory[i] = NULL;
    for (int i = 0; i < 1024; i++)
        left_on_floor[i] = NULL;
}

Character::Character(const Character& other) 
{
    std::cout << "\033[33mCharacter Copy constructor\033[0m" << std::endl;
    *this = other;
}

Character& Character::operator=(const Character& other) 
{
    std::cout << "\033[33mCharacter Copy assignment operator called\033[0m" << std::endl;

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
    std::cout << "\033[33mCharacter Destructor called\033[0m" << std::endl;
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
            inventory[i] = m->clone();
            return;
        }
    }
    std::cerr << "\033[33minventory is full\033[0m" << std::endl;
}

void Character::unequip(int idx)
{
    if (idx > 3 || idx < 0)
    {
        std::cout << "\033[33mindex  out of the range\033[0m" << std::endl;
        return ;
    }
    if (inventory[idx] == NULL)
    {
        std::cout << "\033[33mEmpty!!\033[0m" << std::endl;
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
        std::cerr << "\033[33mindex  out of the range\033[0m" << std::endl;
        return ;
    }
    if (inventory[idx])
        inventory[idx]->use(target);
    else
        std::cerr << "\033[33mMateria not set\033[0m" << std::endl;
}
