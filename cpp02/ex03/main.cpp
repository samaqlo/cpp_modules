#include "Point.hpp"

int main( void ) 
{
    Point a(-6.01836f, 6.66808f);
    Point b(-3.56638f, 0.57856f);
    Point c(2.36147f, 4.80889f);
    Point o(-2.71762f, 4.13527f);
    
    std::cout << bsp(a, b, c, o) << std::endl;

    return 0;
}