#include "phonebook.hpp"
#include "contact.hpp"

contact::contact()
{
    this->index = 0;
};
std::string contact::getfname()
{
    return (this->f_name);
}
std::string contact::getlname()
{
    return (this->l_name);
}
std::string contact::getnname()
{
    return (this->n_name);
}
std::string contact::getpnum()
{
    return (this->p_num);
}
std::string contact::getdsec()
{
    return (this->darkset_sec);
}
void contact::setfname(std::string content)
{
    this->f_name.assign(content);
}
void contact::setlname(std::string content)
{
    this->l_name.assign(content);
}
void contact::setnname(std::string content)
{
    this->n_name.assign(content);
}
void contact::setpnum(std::string content)
{
    this->p_num.assign(content);
}
void contact::setdsec(std::string content)
{
    this->darkset_sec.assign(content);
}


void    print_line()
{
    for(int i = 0; i < 9 ; i++)
            std::cout << "-----"; 
}

void    print_field(std::string field)
{
    std::string tmp;
    int flag = 0;

    std::cout << '|';
    if ((int)field.length() > 10)
        flag = 1;
    if (flag)
        {
            for(int i = 0; i < 10 ; i++)
                {
                    if (i == 9)
                        std::cout << '.';
                    else
                        std::cout << field[i];
                }
        }
    else
        {
           std::cout << std::setw(10);
           std::cout << field;
        }
}

void    print_infos(contact &i_contact, int i)
{
    std::string index;
    std::ostringstream  str_stream;

    str_stream << i;
    index = str_stream.str();
    print_field(index);
    print_field(i_contact.getfname());
    print_field(i_contact.getlname());
    print_field(i_contact.getnname());
}

void    phonebook::search_contact(phonebook &my_phonebook)
{
    std::string input;
    int index;
    print_line();
    std::cout << std::endl;
    std::cout << "|   index  |  f_name  |  l_name  |  n_name  |" << std::endl;
    for(int i = 0; i < 8; i++)
    {
        print_line();
        std::cout << std::endl;
        print_infos(my_phonebook.contacts[i], i + 1);
        std::cout << '|';
        std::cout << std::endl;
    }
    print_line();
    while(1)
    {
        std::cout << "\nPlease enter an id (1 --> 8) to search for (enter ret to return to menu): ";
        getline(std::cin, input);
        if (std::cin.eof())
        {
            reopen_cin();
            return;
        }
        std::istringstream(input) >> index;
        if (!input.compare("ret"))
            return;
        if (input.empty() || index < 1 || index > 8)
            continue;
        if (!contacts[index - 1].index)
            {
                std::cout << "!!! This contact is empty !!!";
                continue;
            }
        print_contact(contacts[index - 1]);
    }
}
