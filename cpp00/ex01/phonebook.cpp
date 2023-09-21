#include "phonebook.hpp"

void    phonebook::print_contact(contact &contact)
{
        std::cout << "_____________________________________________\n";
        std::cout << "First Name : " << contact.getfname() << std::endl;
        std::cout << "Last Name  : " << contact.getlname() << std::endl;
        std::cout << "nickName   : " << contact.getnname() << std::endl;
        std::cout << "phone num  : " << contact.getpnum() << std::endl;
        std::cout << "darkest secret : " << contact.getdsec() << std::endl;
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
                contacts[index].setfname(input);
                break;
            case 1:
                contacts[index].setlname(input);
                break;
            case 2:
                contacts[index].setnname(input);
                break;
            case 3:
                contacts[index].setpnum(input);
                break;
            case 4:
                contacts[index].setdsec(input);
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
            contacts[index].setdsec("");
            contacts[index].setfname("");
            contacts[index].setlname("");
            contacts[index].setnname("");
            contacts[index].setpnum("");
            contacts[index].index = 0;
            return;
        }
    }
    index++;
}
