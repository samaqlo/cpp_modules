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

void Harl::complain( std::string level )
{
    int index;
    void (Harl::*ptr_to_member[4])(void);

     index = ("DEBUG" == level) * 1 + ("INFO" == level) * 2 + ("WARNING" == level) * 3 + ("ERROR" == level) * 4;
    ptr_to_member[0] = &Harl::debug;
    ptr_to_member[1] = &Harl::info;
    ptr_to_member[2] = &Harl::warning;
    ptr_to_member[3] = &Harl::error;
    if (index)
        (this->*ptr_to_member[index - 1])();
    else
        return;
}