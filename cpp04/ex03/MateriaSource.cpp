
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() 
{
    std::cout << "MateriaSource Default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
       inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other) 
{
    std::cout << "MateriaSource Copy constructor" << std::endl;
    *this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) 
{
    std::cout << "MateriaSourceCopy assignment operator called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        delete inventory[i];
        if (other.inventory[i])
            inventory[i] = other.inventory[i]->clone();
    }
    return (*this);
}

MateriaSource::~MateriaSource() 
{
    std::cout << "MateriaSource Destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
            delete inventory[i];
}

void MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] == NULL)
        {
            inventory[i] = m;
            return;
        }
    }
    std::cerr << "Materias are full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] && !inventory[i]->getType().compare(type))
            return (inventory[i]->clone());
    }
    std::cerr << "Materia not learned before" << std::endl;
    return (NULL);
}