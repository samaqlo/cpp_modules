
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() 
{
    std::cout << "\033[34mMateriaSource Default constructor called\033[0m" << std::endl;
    for (int i = 0; i < 4; i++)
       inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other) 
{
    std::cout << "\033[34mMateriaSource Copy constructor\033[0m" << std::endl;
    *this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) 
{
    std::cout << "\033[34mMateriaSourceCopy assignment operator called\033[0m" << std::endl;
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
    std::cout << "\033[34mMateriaSource Destructor called\033[0m" << std::endl;
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
    std::cerr << "\033[34mCan't learn more materias, inventory is full\033[0m" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] && !inventory[i]->getType().compare(type))
            return (inventory[i]->clone());
    }
    std::cerr << "\033[34mMateria not learned before\033[0m" << std::endl;
    return (NULL);
}