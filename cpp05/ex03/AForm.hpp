
#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <fstream>
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
        bool     get_signed() const;
        void checker(Bureaucrat const & executor) const;
        
        virtual void execute(Bureaucrat const & executor) const = 0;
    
        void    beSigned(Bureaucrat& Bur);

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
