
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("presidential pardon", 5, 25)
{
    // std::cout << "PresidentialPardonForm Default constructor called" << std::endl;

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("presidential pardon", 5, 25)
{
    // std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
    this->target.assign(target);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) 
{
    // std::cout << "PresidentialPardonForm Copy constructor" << std::endl;
    *this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) 
{
    // std::cout << "PresidentialPardonFormCopy assignment operator called" << std::endl;
    target = other.target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() 
{
    // std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    checker(executor);
    std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}