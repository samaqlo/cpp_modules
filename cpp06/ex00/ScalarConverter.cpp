
#include "ScalarConverter.hpp"
#include <iomanip>
typedef struct converter
{
    int int_v;
    char char_v;
    double  double_v;
    float   float_v;
    int     flags;

}       converter;

ScalarConverter::ScalarConverter() 
{
    std::cout << "ScalarConverter Default constructor called" << std::endl;

}

ScalarConverter::ScalarConverter(const ScalarConverter& other) 
{
    std::cout << "ScalarConverter Copy constructor" << std::endl;
    *this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) 
{
    std::cout << "ScalarConverterCopy assignment operator called" << std::endl;
    (void)other;
    return (*this);
}

ScalarConverter::~ScalarConverter() 
{
    std::cout << "ScalarConverter Destructor called" << std::endl;
}

void    print_conversion(converter * types)
{
    switch(types->flags)
    {
        case 1:
            std::cout << "char : impossible" << std::endl;
            std::cout << "int : " << types->int_v << std::endl;
            break;
        case 257:
            std::cout << "char : impossible" << std::endl;
            std::cout << "int : impossible" << std::endl;
            break;
        default:
            std::cout << "int : " << types->int_v << std::endl;
            std::cout << "char : '" << types->char_v << "'" << std::endl;
            break;
    }
    std::cout << "float : " << std::fixed << std::setprecision(3) <<  types->float_v << 'f' << std::endl;
    std::cout << "double : " << std::fixed << std::setprecision(3) <<  types->double_v << std::endl;
}

void    convert_int(std::string literal, converter * types)
{
    types->int_v = std::atoi(literal.c_str());
    types->double_v = static_cast<double>(types->int_v);
    types->float_v = static_cast<float>(types->int_v);
    if ((unsigned int)types->int_v <= 255)
        types->char_v = static_cast<char>(types->int_v);
    else
        types->flags += 1;
}

void    convert_float(std::string literal, converter * types)
{
    types->float_v = std::atof(literal.c_str());
    if (types->float_v != std::numeric_limits<float>::infinity())
    {
        types->int_v = static_cast<int>(types->float_v);
        if (types->float_v != (float)INT_MIN && types->int_v == INT_MIN)
            types->flags += 256;
        if (types->int_v <= CHAR_MAX )
        {
            types->char_v = static_cast<char>(types->float_v);
            std::cout << (int)types->char_v << "zeeb";
        }
        else
            types->flags += 1;
    }
    else
        types->flags = 257;
    types->double_v = static_cast<double>(types->float_v);
}

void    convert_double(std::string literal, converter * types)
{
    literal.assign("3.40282347e38");
    types->double_v = std::strtod(literal.c_str(), NULL);
    std::cout << "MAX : " <<types->double_v << std::endl;

    types->float_v = static_cast<float> (types->double_v);
    types->int_v = static_cast<int> (types->double_v);
    types->char_v = static_cast<char> (types->double_v);
}

void    convert_char(std::string literal, converter * types)
{
    types->char_v = literal.at(0);
    types->int_v = static_cast<int>(types->char_v);
    types->float_v = static_cast<float>(types->float_v);
    types->double_v = static_cast<double>(types->double_v); 
}

void    ScalarConverter::convert(std::string literal)
{
    uint8_t type;
    converter  types;

    type = detect_type(literal);

    switch (type)
    {
        case t_char:
            convert_char(literal, &types);
            break;
        case t_int:
            convert_int(literal, &types);
            break;
        case t_float:
            convert_float(literal, &types);
            break;
        case t_double:
            convert_double(literal, &types);
            break;
        default:
            exit(0);
    }
    print_conversion(&types);
}