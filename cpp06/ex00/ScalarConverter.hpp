
#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

class ScalarConverter 
{
    private:
        int  int_v;
        float float_v;
        double double_v;
        char char_v;

    public:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& other);
        ScalarConverter& operator=(const ScalarConverter& other);
        ~ScalarConverter();

        static  void    convert(std::string literal);

};

#endif
