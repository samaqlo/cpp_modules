
#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    private:
        Brain *cat_brain;
    public:
        Cat();
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
      ~Cat();
        void    makeSound();
};

#endif
