#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <cstdio>
#include <iomanip>
#include "contact.hpp"

class phonebook
{
    private:
        contact contacts[8];
    public:
        void    add_contact();
        void    print_contact(contact &contact);
        int    fill_contact(std::string prompt, int object, int index);
        void    search_contact(phonebook &my_phonebook);
};

void    print_line();
void    reopen_cin();

#endif