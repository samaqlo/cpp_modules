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
    int     operator>(const Fixed& fpoint);  
    int     operator>=(const Fixed& fpoint);  
    int     operator<(const Fixed& fpoint);  
    int     operator<=(const Fixed& fpoint);  
    int     operator==(const Fixed& fpoint);
    int     operator!=(const Fixed& fpoint); 

    Fixed     operator*(const Fixed& fpoint);
    Fixed     operator+(const Fixed& fpoint);
    Fixed     operator-(const Fixed& fpoint);
    Fixed     operator/(const Fixed& fpoint);

    Fixed     operator++(int);
    Fixed     operator--(int);
    Fixed     operator++();
    Fixed     operator--();


    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    float   toFloat( void ) const;
    int     toInt( void ) const;

    static Fixed&  min(Fixed& fix1, Fixed& fix2);
    static Fixed&  min(const Fixed& fix1, const Fixed& fix2);
    static Fixed&  max(Fixed& fix1, Fixed& fix2);
    static Fixed&  max(const Fixed& fix1, const Fixed& fix2);
};

std::ostream& operator<<(std::ostream& out, const Fixed& fpoint);

#endif