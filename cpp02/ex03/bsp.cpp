#include "Point.hpp"

//Area = 1/2 * |(x1y2 + x2y3 + x3y1) - (y1x2 + y2x3 + y3x1)|

Fixed cal_area(Point a, Point b, Point c)
{
    Fixed area;
(void)c;
(void)b;
    area = a.get_x();
    std::cout << a.get_x() << std::endl;
    
    if (area < Fixed(0))
        area = area * Fixed(-1);
    return (area/Fixed(2));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed sum;
    Point a1 = (Point) a;
    Fixed ok = a1.get_x();
    std::cout << ok.toFloat() << std::endl;

    sum = cal_area(a, b , point);
    std::cout << sum << std::endl;
    if (cal_area(a,b,c) == sum)
        return (true);
    return(false);
}