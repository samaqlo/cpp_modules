
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() 
{
    // std::cout << "Bureaucrat Default constructor called" << std::endl;

}

Bureaucrat::Bureaucrat(std::string  name, int gr)
{
    this->name.assign(name);
    try
    {
        if (gr >= 1 && gr <= 150)
            grade = gr;
        else if (gr < 1)
            throw(Bureaucrat::GradeTooHighException());
        else
            throw(Bureaucrat::GradeTooLowException());
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}


Bureaucrat::Bureaucrat(const Bureaucrat& other) 
{
    // std::cout << "Bureaucrat Copy constructor" << std::endl;
    *this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) 
{
    // std::cout << "BureaucratCopy assignment operator called" << std::endl;
    name.assign(other.name);
    grade = other.grade;
    return (*this);
}

Bureaucrat::~Bureaucrat() 
{
    // std::cout << "Bureaucrat Destructor called" << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Error : Grade is too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Error : Grade is too low");
}

std::string Bureaucrat::get_name() const
{
    return (name);
}

int Bureaucrat::get_grade() const
{
    return (grade);
}

void    Bureaucrat::increment()
{
    try
    {
        if (grade - 1 >= 1)
            grade--;
        else
            throw(Bureaucrat::GradeTooHighException());
    }
    catch (std::exception & e)
     {
        std::cerr << e.what() << std::endl;
     }
}

void    Bureaucrat::decrement()
{
    try
    {
        if (grade + 1 <= 150)
            grade++;
        else
            throw(Bureaucrat::GradeTooLowException());
    }
    catch (std::exception & e)
     {
        std::cerr << e.what() << std::endl;
     }
}

std::ostream& operator<<(std::ostream& outstream, const Bureaucrat& Bur)
{
    outstream << Bur.get_name() << ", bureaucrat grade " << Bur.get_grade();
    return (outstream);
}

void    Bureaucrat::signForm(Form& my_form)
{
    try
    {
        my_form.be_signed(*this);
        std::cout << *this << " signed " << my_form << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << *this <<   " couldn't sign " << my_form << " because " << e.what();
    }
}
