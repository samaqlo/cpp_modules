#include "PhoneBook.hpp"

void    PhoneBook::print_Contact(Contact &Contact)
{
        std::cout << "_____________________________________________\n";
        std::cout << "First Name : " << Contact.getfname() << std::endl;
        std::cout << "Last Name  : " << Contact.getlname() << std::endl;
        std::cout << "nickName   : " << Contact.getnname() << std::endl;
        std::cout << "phone num  : " << Contact.getpnum() << std::endl;
        std::cout << "darkest secret : " << Contact.getdsec() << std::endl;
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
int    PhoneBook::fill_Contact(std::string prompt, int object, int index)
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
                Contacts[index].setfname(input);
                break;
            case 1:
                Contacts[index].setlname(input);
                break;
            case 2:
                Contacts[index].setnname(input);
                break;
            case 3:
                Contacts[index].setpnum(input);
                break;
            case 4:
                Contacts[index].setdsec(input);
                break;
        }
        return (0);
    }
    return (0);
}
void    PhoneBook::add_Contact()
{
    static int index;
    std::string prompts[5] = {"First Name: ", "Last Name: ", "Nick name: ", "Phone Number: ", "Darkset Secret: "};

    if (index == 8)
        index = 0;
    Contacts[index].index = index + 1;
    for (int i = 0; i < 5; i++)
    {
        if (fill_Contact(prompts[i], i, index))
        {
            Contacts[index].setdsec("");
            Contacts[index].setfname("");
            Contacts[index].setlname("");
            Contacts[index].setnname("");
            Contacts[index].setpnum("");
            Contacts[index].index = 0;
            return;
        }
    }
    index++;
}
