#include "Harl.hpp"


void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void    Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int     get_level_index(std::string level)
{
    while(!level.compare("DEBUG"))
        return (0);
    while(!level.compare("INFO"))
        return (1);
    while(!level.compare("WARNING"))
        return (2);
    while(!level.compare("ERROR"))
        return (3);
    return (-1);
}

void Harl::complain( std::string level )
{
    int index;
    void (Harl::*ptr_to_member[4])(void);

    index = get_level_index(level);
    ptr_to_member[0] = &Harl::debug;
    ptr_to_member[1] = &Harl::info;
    ptr_to_member[2] = &Harl::warning;
    ptr_to_member[3] = &Harl::error;
    if (index != -1)
        (this->*ptr_to_member[index])();
    else
        return;
}