#include "Fixed.hpp"

int main( void ) 
{
    Fixed a(20);
Fixed const b( Fixed( 5.01f ) * Fixed( 2 ) );
std::cout << a / b << std::endl;
// std::cout << ++a << std::endl;
// std::cout << a << std::endl;
// std::cout << a++ << std::endl;
// std::cout << a << std::endl;
// std::cout << b << std::endl;
// std::cout << Fixed::max( a, b ) << std::endl;

    return 0;
}