#include "Point.hpp"

Point::Point() : x(0) , y (0){};

Point::Point(float const xp, float const yp) : x(xp) , y(yp){};

Point& Point::operator=(const Point& mypoint)
{
    (Fixed)x = (Fixed)mypoint.x;
    (Fixed)y = (Fixed)mypoint.y;
    return (*this);
}

Point::Point(const Point& mypoint)
{
    *this = mypoint;
}

Point::~Point()
{
    // std::cout << "Destructor called" << std::endl;
}

void Point::set_x(const Fixed& val)
{
    (Fixed)x = (Fixed)val;
}

void Point::set_y(const Fixed& val)
{
    (Fixed)y = (Fixed)val;
}

Fixed Point::get_x()
{
    return (x);
}

Fixed Point::get_y()
{
    return (y);
}
