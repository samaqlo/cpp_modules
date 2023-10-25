
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("robotomy request", 45, 72)
{
    // std::cout << "RobotomyRequestForm Default constructor called" << std::endl;

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("robotomy request", 45, 72)
{
    // std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
    this->target.assign(target);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
{
    // std::cout << "RobotomyRequestForm Copy constructor" << std::endl;
    *this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) 
{
    // std::cout << "RobotomyRequestFormCopy assignment operator called" << std::endl;
    target = other.target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() 
{
    // std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    checker(executor);
    std::cout << "*drilling noises*" << std::endl;
    std::srand(std::time(0));
    if (std::rand() % 2)
        std::cout << target << " has been robotomized successfully" << std::endl;
    else
        std::cout << "!!! the robotomy failed !!!" << std::endl;
} 