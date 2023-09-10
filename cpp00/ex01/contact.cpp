#include "phonebook.hpp"
void    print_line()
{
    for(int i = 0; i < 9 ; i++)
            std::cout << "_____"; 
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

                }
        }

    
}
void    print_infos(contact &i_contact)
{
    for (i <)
}

void    phonebook::search_contact(phonebook &my_phonebook)
{
    for(int i = 0; i < 8; i++)
    {
        print_line();
        print_infos(my_phonebook.contacts[i]);

    }
}
_____________________________________________
|          |          |          |          |