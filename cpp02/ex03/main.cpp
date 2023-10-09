#include "Point.hpp"

int main( void ) 
{
    Point a(-3.43f, 7.74f);
    Point b(-6.67f, 3.44f);
    Point c(-0.95f, 4.32f);
    Point o(-8.09f, 6.5f);

    std::cout << bsp(a, b, c, o) << std::endl;

    return 0;
}