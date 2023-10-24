
#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm 
{
    private:
        const std::string name;
        bool is_signed;
        const int grade_to_execute;
        const int grade_to_sign;

    public:
        AForm();
        AForm(std::string bur_name, int gte, int gts);
        AForm(const AForm& other);
        AForm& operator=(const AForm& other);
        ~AForm();

        std::string    get_name() const;
        int     get_grade_to_e() const;
        int     get_grade_to_s() const;
        virtual bool     get_signed() const = 0;
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

std::ostream& operator<<(std::ostream& outstream, const AForm& my_form);

#endif
