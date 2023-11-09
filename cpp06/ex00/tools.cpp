#include "ScalarConverter.hpp"

int     check_double(std::string    literal, char c)
{
    return (literal.find(c) == literal.rfind(c));
}

int     detect_type(std::string literal)
{
    int i;

    i = literal.find_last_of("-+");
    if (literal.find_first_not_of("0123456789+-") == literal.npos)
    {
        if (i && i > 0)
            throw(std::logic_error("Bad input !!!"));
        return (t_int);
    }
    if (literal.find_first_not_of("0123456789.ef+-") == literal.npos)
    {
        if (literal.find("f", 0) == literal.npos && check_double(literal, '.'))
            return (t_double);
        if (!check_double(literal, 'f') || !check_double(literal, '.')
            || (check_double(literal, 'f') && literal.at(literal.size() - 1) != 'f') || (i && i > 0)
            || (int)(literal.find_last_of("0123456789")) == -1)
            throw(std::logic_error("Bad input !!!"));
        else
            return (t_float);
    }
    if (literal.size() == 1)
        return (t_char);
    throw(std::logic_error("Bad input !!!"));
}