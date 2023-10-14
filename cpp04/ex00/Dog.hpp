
#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>

class Dog {
private:
    

public:
    Dog();
    Dog(const Dog& other);  // Copy constructor
    Dog& operator=(const Dog& other);  // Copy assignment operator
    ~Dog();

};

#endif
