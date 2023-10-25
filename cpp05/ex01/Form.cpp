#include "Form.hpp"

Form::Form() : name("default") , grade_to_execute(150), grade_to_sign(150)
{
    // std::cout << "Form Default constructor called" << std::endl;
    is_signed = 0;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}

Form::Form(std::string bur_name, const int gte, const int gts) : name(bur_name) , grade_to_execute(gte), grade_to_sign(gts)
{
    try
    {
        if (grade_to_execute < 1 || grade_to_sign < 1)
            throw(GradeTooHighException());
        else if (grade_to_sign > 150 || grade_to_execute > 150)
            throw(GradeTooLowException());
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    is_signed = false;
}

Form::Form(const Form& other) : name(other.name), grade_to_execute(other.grade_to_execute), grade_to_sign(other.grade_to_sign)
{
    // std::cout << "Form Copy constructor" << std::endl;
    is_signed = other.is_signed;
}

Form& Form::operator=(const Form& other)
{
    is_signed = other.is_signed;
    return (*this);
}

Form::~Form() 
{
    // std::cout << "Form Destructor called" << std::endl;
}

std::string    Form::get_name() const
{
    return (name);
}

int     Form::get_grade_to_e() const
{
    return(grade_to_execute);
}

int     Form::get_grade_to_s() const
{
    return(grade_to_sign);
}

bool    Form::get_signed() const 
{
    return (is_signed);
}

std::ostream& operator<<(std::ostream& outstream, const Form& my_form)
{
    outstream << "Form name : " << my_form.get_name();
    return (outstream);
}

void    Form::be_signed(Bureaucrat& Bur)
{
        if (Bur.get_grade() <= grade_to_sign && grade_to_sign >= 1 && Bur.get_grade() >= 1)
            is_signed = true;
        else
            throw(GradeTooLowException());
}
