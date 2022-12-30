#include "Point.hpp"

Point::Point() : x(0), y(0)
{

}

Point::Point(float const x1, float const y1) : x(x1), y(y1)
{
}

Point::Point(Point const &p) : x(p.x), y(p.y)
{

}

Point::~Point()
{

}

Point &Point::operator=(Point const &p)
{
    new (this) Point(p);
    return *(this);
}

Fixed const Point::getX() const
{
    return (this->x);
}

Fixed const Point::getY() const
{
    return (this->y);
}

Fixed area(Point const a, Point const b, Point const c)
{
    Fixed ar;
    Fixed comp(0);
    Fixed div(2);
    ar = (a.getX() * b.getY()) + (a.getY() * c.getX()) + (b.getX() * c.getY());
    ar = ar - ((b.getY() * c.getX()) + (a.getY() * b.getX()) + (a.getX() * c.getY()));
    if(ar < comp)
        ar = -ar;
    ar = ar / div;
    return (ar);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed comp(0);
    if((area(a,b,point) + area(a,c,point) + area(b,c,point)) ==  area(a,b,c))
    {
        if(area(a,b,point) == comp || area(a,c,point) == comp || area(b,c,point) == comp)
            return (false);
        return true;
    }
    return (false);
}