#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <cstdio>

class contact
{
    public:
    std::string  f_name;
    std::string  l_name;
    std::string  n_name;
    std::string  p_num;
    std::string  darkset_sec;
    int     index;
    contact()
    {
        index = 0;
    }
};

class phonebook
{
    public:
    contact contacts[8];

    void    add_contact();
    void    print_contact(contact &contact);
    int    fill_contact(std::string prompt, int object, int index);
    void    search_contact(phonebook &my_phonebook);
};

void    print_line();
void    reopen_cin();

#endif