#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int num;
    static const int frac_bits;
public:
    Fixed();
    Fixed(Fixed& obj);
    ~Fixed();
    Fixed&  operator=(const Fixed& fpoint);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif