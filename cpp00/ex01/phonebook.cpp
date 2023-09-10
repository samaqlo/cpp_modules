#include "phonebook.hpp"

void    phonebook::print_contact(contact &contact)
{
        std::cout << "_____________________________________________\n";
        std::cout << "First Name : " << contact.f_name << "\n";
        std::cout << "Last Name  : " << contact.l_name << "\n";
        std::cout << "nickName   : " << contact.n_name << "\n";
        std::cout << "phone num  : " << contact.p_num << "\n";
        std::cout << "darkest secret : " << contact.p_num << "\n";
        std::cout << "_____________________________________________\n";
}
int     phone_ckeck(std::string input, int obj)
{
    int i = 0;

    while(input[i] && obj == 3)
    {
        if (!isdigit(input[i]) && input[i] != '+' && input[i] != '*' && input[i] != '#')
            return (std::cout << "!!! This field require numeric input !!!\n", 0);
        i++;
    }
    return (1);
}
int    phonebook::fill_contact(std::string prompt, int object, int index)
{
    std::string input;
    while(1)
    {
        std::cout << prompt;
        getline(std::cin, input);
        if (std::cin.eof())
        {
            reopen_cin();
            return (1);
        }
        if (input.empty() || !phone_ckeck(input, object))
            continue;
        switch (object)
        {
            case 0:
                contacts[index].f_name.assign(input);
                break;
            case 1:
                contacts[index].l_name.assign(input);
                break;
            case 2:
                contacts[index].n_name.assign(input);
                break;
            case 3:
                contacts[index].p_num.assign(input);
                break;
            case 4:
                contacts[index].darkset_sec.assign(input);
                break;
        }
        return (0);
    }
    return (0);
}
void    phonebook::add_contact()
{
    static int index;
    std::string prompts[5] = {"First Name: ", "Last Name: ", "Nick name: ", "Phone Number: ", "Darkset Secret: "};

    if (index == 8)
        index = 0;
    contacts[index].index = index + 1;
    for (int i = 0; i < 5; i++)
    {
        if (fill_contact(prompts[i], i, index))
        {
            contacts[index].darkset_sec.assign("");
            contacts[index].f_name.assign("");
            contacts[index].l_name.assign("");
            contacts[index].n_name.assign("");
            contacts[index].p_num.assign("");
            contacts[index].index = 0;
            return;
        }
    }
    index++;
}
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
int    cmd_line(std::string &cmd)
{
    std::cout << "_____________________________________________\n";
    std::cout << "Hello, this is the awesome phonebook :" << "\n";
    std::cout << "1. ADD" << "\n";
    std::cout << "2. SEARCH" << "\n";
    std::cout << "3. EXIT" << "\n";
    while(1)
    {
        std::cout << "please enter a command : ";
        getline(std::cin, cmd);
        if (std::cin.eof())
        {
            reopen_cin();
            continue;
        }
        if (!cmd.compare("ADD") || !cmd.compare("SEARCH") || !cmd.compare("EXIT"))
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