#include "phonebook.hpp"

void    phonebook::print_contact()
{
    for(int i = 0; i < 1; i++)
    {
        std::cout << "contact : " << contacts[i].index << "\n";
        std::cout << "First Name : " << contacts[i].f_name << "\n";
        std::cout << "Last Name : " << contacts[i].l_name << "\n";
        std::cout << "nickName : " << contacts[i].n_name << "\n";
        std::cout << "phone num: " << contacts[i].p_num << "\n";
        std::cout << "_____________________________________________\n";
    }
}

void    phonebook::fill_contact(std::string prompt, int object, int index)
{
    std::string input;
    while(1)
    {
        std::cout << prompt;
        getline(std::cin, input);
        if (input.empty())
            continue;
        switch (object)
        {
            case 0:
                contacts[index].f_name.assign(input);
            case 1:
                contacts[index].l_name.assign(input);
            case 2:
                contacts[index].n_name.assign(input);
            case 3:
                contacts[index].p_num.assign(input);
            case 4:
                contacts[index].darkset_sec.assign(input);
            return;
        }
    }
}
void    phonebook::add_contact()
{
    static int index;
    std::string prompts[5] = {"First Name: ", "Last Name: ", "Nick name: ", "Phone Number: ", "Darkset Secret: "};

    if (index == 8)
        index = 0;
    contacts[index].index = index + 1;
    for (int i = 0; i < 5; i++)
        fill_contact(prompts[i], i, index);
    index++;
}
int   exec_commands(std::string  cmd, phonebook& my_phonebook)
{
    if (!cmd.compare("ADD"))
        my_phonebook.add_contact();
    else if (!cmd.compare("SEARCH"))
        my_phonebook.search_contact(my_phonebook);
    return (0);
}

int main()
{
    phonebook my_phonebook;
    std::string cmd;

    while(1)
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
            if (!cmd.compare("ADD") || !cmd.compare("SEARCH") || !cmd.compare("EXIT"))
                break;
        }
        exec_commands(cmd, my_phonebook);
    }    
} 