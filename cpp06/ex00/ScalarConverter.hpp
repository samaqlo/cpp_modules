#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>

enum
{
    t_char,
    t_int,
    t_float,
    t_double,
};

class ScalarConverter 
{
    private:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter& other);
        ScalarConverter& operator=(const ScalarConverter& other);
    public:
        static  void    convert(std::string literal);
};

int     detect_type(std::string literal);

#endif
