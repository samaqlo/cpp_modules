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
        void set_x(const Fixed& val);
        void set_y(const Fixed& val);
        Fixed get_x();
        Fixed get_y();
};
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif