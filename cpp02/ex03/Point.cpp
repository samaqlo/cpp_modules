#include "Point.hpp"

Point::Point() : x(0) , y (0)
{
    std::cout << "Default constructor called" << std::endl;
};

Point::Point(float const xp, float const yp) : x(xp) , y(yp)
{
    std::cout << "float constructor called" << std::endl;
}

Point& Point::operator=(const Point& mypoint)
{
    std::cout << "Copy assignment operator called" << std::endl;
    (Fixed)this->x = mypoint.x;
    (Fixed)this->y = mypoint.y;
    return (*this);
}

Point::Point(const Point& mypoint) : x(mypoint.x) , y(mypoint.y)
{
    std::cout << "Copy constructor called" << std::endl;
}

Point::~Point()
{
    std::cout << "Destructor called" << std::endl;
}

const Fixed Point::get_x()
{
    return (x);
}

const Fixed Point::get_y()
{
    return (y);
}
