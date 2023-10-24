#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact::Contact()
{
    this->index = 0;
};

std::string Contact::getfname()
{
    return (this->f_name);
}

std::string Contact::getlname()
{
    return (this->l_name);
}

std::string Contact::getnname()
{
    return (this->n_name);
}

std::string Contact::getpnum()
{
    return (this->p_num);
}

std::string Contact::getdsec()
{
    return (this->darkset_sec);
}

void Contact::setfname(std::string content)
{
    this->f_name.assign(content);
}

void Contact::setlname(std::string content)
{
    this->l_name.assign(content);
}

void Contact::setnname(std::string content)
{
    this->n_name.assign(content);
}

void Contact::setpnum(std::string content)
{
    this->p_num.assign(content);
}

void Contact::setdsec(std::string content)
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

void    print_infos(Contact &i_Contact, int i)
{
    std::string index;
    std::ostringstream  str_stream;

    str_stream << i;
    index = str_stream.str();
    print_field(index);
    print_field(i_Contact.getfname());
    print_field(i_Contact.getlname());
    print_field(i_Contact.getnname());
}

void    PhoneBook::search_Contact(PhoneBook &my_PhoneBook)
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
        print_infos(my_PhoneBook.Contacts[i], i + 1);
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
        if (!Contacts[index - 1].index)
            {
                std::cout << "!!! This Contact is empty !!!";
                continue;
            }
        print_Contact(Contacts[index - 1]);
    }
}
