#ifndef PhoneBook_HPP
#define PhoneBook_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <cstdio>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact Contacts[8];
    public:
        void    add_Contact();
        void    print_Contact(Contact &Contact);
        int    fill_Contact(std::string prompt, int object, int index);
        void    search_Contact(PhoneBook &my_PhoneBook);
};

void    print_line();
void    reopen_cin();

#endif