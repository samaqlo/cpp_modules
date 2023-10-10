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
    return (num >> frac_bits);
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

bool     Fixed::operator>(const Fixed& fpoint) const
{
    return (this->num > fpoint.num);
}

bool     Fixed::operator>=(const Fixed& fpoint) const
{
    return(this->num >= fpoint.num);
}

bool     Fixed::operator<(const Fixed& fpoint) const
{
    return (this->num < fpoint.num);
}

bool     Fixed::operator<=(const Fixed& fpoint) const
{
    return (this->num <= fpoint.num);
}

bool     Fixed::operator==(const Fixed& fpoint) const
{
    return (this->num == fpoint.num);
}

bool     Fixed::operator!=(const Fixed& fpoint) const
{
    return (this->num != fpoint.num);
}

Fixed     Fixed::operator*(const Fixed& fpoint) const
{
    Fixed mul(this->toFloat() * fpoint.toFloat());

    return (mul);
}

Fixed     Fixed::operator+(const Fixed& fpoint) const
{
    Fixed sum;

    sum.num = this->num + fpoint.num;
    return (sum);
}

Fixed     Fixed::operator-(const Fixed& fpoint) const
{
    Fixed sub;

    sub.num = this->num - fpoint.num;
    return (sub);
}

Fixed     Fixed::operator/(const Fixed& fpoint) const
{

    if (fpoint.num == 0)
    {
        return (std::cout << "!!! Error : Division by 0 !!!" << std::endl, Fixed(0));
    }
    Fixed div(this->toFloat() / fpoint.toFloat());
    return (div);
}

Fixed   Fixed::operator++(int)
{
    Fixed dup(*this);

    num += 1;
    return (dup);
}

Fixed&    Fixed::operator++()
{
    num += 1;

    return (*this);
}

Fixed   Fixed::operator--(int)
{
    Fixed dup(*this);

    num -= 1;
    return (dup);
}

Fixed&     Fixed::operator--()
{
    num -= 1;

    return (*this);
}

Fixed&  Fixed::min(Fixed& fix1, Fixed& fix2)
{
    if (fix1 < fix2)
        return (fix1);
    else
        return (fix2);
}

Fixed&  Fixed::min(const Fixed& fix1, const Fixed& fix2)
{
    if (fix1 < fix2)
        return ((Fixed&)fix1);
    else
        return ((Fixed&)fix2);
}

Fixed&  Fixed::max(Fixed& fix1, Fixed& fix2)
{
    if (fix1 > fix2)
        return (fix1);
    else
        return (fix2);
}

Fixed&  Fixed::max(const Fixed& fix1, const Fixed& fix2)
{
    if (fix1 > fix2)
        return ((Fixed&)fix1);
    else
        return ((Fixed&)fix2);
}






