#include "Point.hpp"

int main( void ) 
{
    Point a(-4.7f, 3.24f);
    Point b(0.98f, 0.76f);
    Point c(-7.92f, -1.74f);
    Point o(-5.1f, 0.3f);
    
    std::cout << bsp(a, b, c, o) << std::endl;

    return 0;
}