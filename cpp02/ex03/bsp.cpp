#include "Point.hpp"

//Area = 1/2 * |(x1y2 + x2y3 + x3y1) - (y1x2 + y2x3 + y3x1)|

Fixed cal_area(Point a, Point b, Point c)
{
    Fixed area;

    area = (a.get_x() * b.get_y() + b.get_x() * c.get_y() + c.get_x() * a.get_y()) - \
            (a.get_y() * b.get_x() + b.get_y() * c.get_x() + c.get_y() * a.get_x());
    if (area < 0)
        area = area * -1;
    
    return (area/2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed sum;
    Fixed area1 = cal_area(a, b , point);
    Fixed area2 = cal_area(a, c , point);
    Fixed area3 = cal_area(c, b , point);

    if (area1 == 0 || area2 == 0 || area3 == 0)
        return (0);
    sum = area1 + area2 + area3;
    if (cal_area(a,b,c) == sum)
        return (true);
    return(false);
}
