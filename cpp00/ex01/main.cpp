#include "phonebook.hpp"

int   exec_commands(std::string  &cmd, phonebook& my_phonebook)
{
    if (!cmd.compare("ADD"))
        my_phonebook.add_contact();
    else if (!cmd.compare("SEARCH"))
        my_phonebook.search_contact(my_phonebook);
    else if (!cmd.compare("EXIT"))
        return (std::cout << "!!! EXIT !!!\n", 1);
    return (0);
}
void    reopen_cin()
{
    std::cin.clear();
    std::fclose(stdin);
    std::fopen("/dev/tty", "r");
    std::cout << std::endl;
}
int    check_input(std::string cmd)
{
    if (!cmd.compare("ADD") || !cmd.compare("SEARCH") || !cmd.compare("EXIT"))
        return (1);
    return (0);
}

int    cmd_line(std::string &cmd)
{
    std::cout << "_____________________________________________\n";
    std::cout << "Hello, this is the awesome phonebook :" << std::endl;
    std::cout << "1. ADD" << std::endl;
    std::cout << "2. SEARCH" << std::endl;
    std::cout << "3. EXIT" << std::endl;
    while(1)
    {
        std::cout << "please enter a command: ";
        getline(std::cin, cmd);
        if (std::cin.eof())
        {
            reopen_cin();
            continue;
        }
        if (check_input(cmd))
            break;
    }
    return (0);
}
 
int main()
{
    phonebook my_phonebook;
    std::string cmd;

    while(1)
    {
        cmd_line(cmd);
        if (exec_commands(cmd, my_phonebook))
            return (1);
    }    
} 