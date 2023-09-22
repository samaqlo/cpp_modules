#include "Weapon.hpp"

Weapon::Weapon(std::string  type)
{
    this->type.assign(type);
}
const std::string& Weapon::getType()
{
    return (type);
} 
void    Weapon::setType(std::string type)
{
    this->type.assign(type);
}