
#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form 
{
    private:
        const std::string name;
        bool is_signed;
        const int grade_to_execute;
        const int grade_to_sign;

    public:
        Form();
        Form(std::string bur_name, int gte, int gts);
        Form(const Form& other);
        Form& operator=(const Form& other);
        ~Form();

        std::string    get_name() const;
        int     get_grade_to_e() const;
        int     get_grade_to_s() const;
        bool     get_signed() const;
        void    be_signed(Bureaucrat& Bur);

        class GradeTooHighException : public std::exception
        {
            public:
            const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
            const char* what() const throw();
        };

};

std::ostream& operator<<(std::ostream& outstream, const Form& my_form);

#endif
