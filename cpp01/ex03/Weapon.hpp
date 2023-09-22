//Implement a Weapon class that has:
//• A private attribute type, which is a string.
//• A getType() member function that returns a const reference to type.
//• A setType() member function that sets type using the new one passed as parameter

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std:: string type);
        const std::string& getType();
        void    setType(std::string type);
};

#endif