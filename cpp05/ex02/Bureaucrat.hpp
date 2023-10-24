
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        std::string name;
        int         grade;

    public:
        Bureaucrat();
        Bureaucrat(std::string  name, int gr);
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat& operator=(const Bureaucrat& other);
        ~Bureaucrat();

        std::string get_name() const;
        int get_grade() const;
        void    increment();
        void    decrement();
        void    signForm(Form& my_form);

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

std::ostream& operator<<(std::ostream& outstream, const Bureaucrat& Bur);

#endif
