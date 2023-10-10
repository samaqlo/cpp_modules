#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        Point(float const x, float const y);
        Point(const Point& mypoint);
        ~Point();
        Point& operator=(const Point& mypoint);
        const Fixed get_x();
        const Fixed get_y();
};
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif