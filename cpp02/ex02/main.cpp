#include "Fixed.hpp"

int main( void ) 
{
    Fixed a(50);
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed const d( Fixed( 6.05f ) * Fixed( 2 ) );
    Fixed c(0);

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << "comparaison " << (Fixed)b/c << std::endl;
    std::cout << Fixed::max( c, a ) << std::endl; 
    std::cout << Fixed::min( d, b ) << std::endl;

    return 0;
}