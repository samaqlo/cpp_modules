
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() 
{
    // std::cout << "ScalarConverter Default constructor called" << std::endl;

}

ScalarConverter::ScalarConverter(const ScalarConverter& other) 
{
    // std::cout << "ScalarConverter Copy constructor" << std::endl;
    *this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) 
{
    // std::cout << "ScalarConverterCopy assignment operator called" << std::endl;

    return (*this);
}

ScalarConverter::~ScalarConverter() 
{
    // std::cout << "ScalarConverter Destructor called" << std::endl;
}

