#include "AForm.hpp"

AForm::AForm() : name("default") , grade_to_execute(150), grade_to_sign(150)
{
    // std::cout << "AForm Default constructor called" << std::endl;
    is_signed = 0;
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return ("Grade is too High");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}

AForm::AForm(std::string bur_name, const int gte, const int gts) : name(bur_name) , grade_to_execute(gte), grade_to_sign(gts)
{
    try
    {
        if (grade_to_execute < 1 || grade_to_sign < 1)
            throw(AForm::GradeTooHighException());
        else if (grade_to_sign > 150 || grade_to_execute > 150)
            throw(AForm::GradeTooLowException());
    }
    catch(AForm::GradeTooHighException & e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(AForm::GradeTooLowException & e)
    {
        std::cerr << e.what() << std::endl;
    }
    is_signed = false;
}

AForm::AForm(const AForm& other) : name(other.name), grade_to_execute(other.grade_to_execute), grade_to_sign(other.grade_to_sign)
{
    // std::cout << "AForm Copy constructor" << std::endl;
    is_signed = other.is_signed;
}

AForm& AForm::operator=(const AForm& other)
{
    is_signed = other.is_signed;
    return (*this);
}

AForm::~AForm() 
{
    // std::cout << "AForm Destructor called" << std::endl;
}

std::string    AForm::get_name() const
{
    return (name);
}

int     AForm::get_grade_to_e() const
{
    return(grade_to_execute);
}

int     AForm::get_grade_to_s() const
{
    return(grade_to_sign);
}

bool    AForm::get_signed() const 
{
    return (is_signed);
}

std::ostream& operator<<(std::ostream& outstream, const AForm& my_Aform)
{
    outstream << "AForm name : " << my_Aform.get_name() << " status : " << my_Aform.get_signed();
    return (outstream);
}

// void    AForm::be_signed(Bureaucrat& Bur)
// {
//         if (Bur.get_grade() <= this->grade_to_sign && grade_to_sign >= 1)
//             is_signed = true;
//         else
//             throw(AForm::GradeTooLowException());
// }
