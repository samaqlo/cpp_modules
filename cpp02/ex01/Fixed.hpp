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
    Fixed(const Fixed& obj);
    Fixed(int const val);
    Fixed(float const val);
    ~Fixed();
    Fixed&  operator=(const Fixed& fpoint);
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    float   toFloat( void ) const;
    int     toInt( void ) const;
};
std::ostream& operator<<(std::ostream& out, const Fixed& fpoint);

#endif