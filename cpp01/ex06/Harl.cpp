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

    index =  index = ("DEBUG" == level) * 1 + ("INFO" == level) * 2 + ("WARNING" == level) * 3 + ("ERROR" == level) * 4;

    if (!index)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return;
    }
    while(index <= 4)
    {
        switch(index)
        {
            case 1:
                std::cout << "[ DEBUG ]" << std::endl;
                this->debug();
                break;
            case 2:
                std::cout << "[ INFO ]" << std::endl;
                this->info();
                break;
            case 3:
                std::cout << "[ WARNING ]" << std::endl;
                this->warning();
                break;
            case 4:
                std::cout << "[ ERROR ]" << std::endl;
                this->error();
                break;
            default :
                break;
        }
        std::cout << std::endl;
        index++;
    }
}