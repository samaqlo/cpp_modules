#include "Fixed.hpp"

const int Fixed::frac_bits = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    num = 0;
}

Fixed::Fixed(int const val)
{
    std::cout << "Int constructor called" << std::endl;
    num = 0;
    num = val;
    num <<= frac_bits;
}

Fixed::Fixed(float const val)
{
    std::cout << "Float constructor called" << std::endl;
    num =  roundf(val * (1 << frac_bits));
}

float   Fixed::toFloat( void ) const
{
    return ((float)num / (1 << frac_bits));
}

int     Fixed::toInt( void ) const
{
    return ((int)num / (1 << frac_bits));
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->num = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (num);
}

Fixed::Fixed(const Fixed& obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fpoint)
{
    out << fpoint.toFloat();
    return (out);
}

Fixed&  Fixed::operator=(const Fixed& fpoint)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->num = fpoint.num;
    return (*this);
}

