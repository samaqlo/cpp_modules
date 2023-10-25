
#include "Intern.hpp"

Intern::Intern() 
{
    // std::cout << "Intern Default constructor called" << std::endl;

}

Intern::Intern(const Intern& other) 
{
    // std::cout << "Intern Copy constructor" << std::endl;
    *this = other;
}

Intern& Intern::operator=(const Intern& other) 
{
    // std::cout << "InternCopy assignment operator called" << std::endl;
    (void)other;
    return (*this);
}

Intern::~Intern() 
{
    // std::cout << "Intern Destructor called" << std::endl;
}

AForm* Intern::makeForm(std::string form_name, std::string target)
{
    uint8_t create = (form_name == "shrubbery creation") * 1 + (form_name == "robotomy request") * 2 + (form_name == "presidential pardon") * 3;
        switch(create)
        {
            case 1:
                return (new ShrubberyCreationForm(target));
            case 2:
                return (new RobotomyRequestForm(target));
            case 3:
                return (new PresidentialPardonForm(target));
            default:
                std::cerr << "Error : wrong form name" << std::endl;
                return (NULL);
        }
}

