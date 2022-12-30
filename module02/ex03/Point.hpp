#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"
#include "cmath"
class Point
{
private:
    Fixed  const x;
    Fixed  const y;

public:
    Point();
    ~Point();
    Point(float const x1, float const y1);
    Point(Point const &p);
    Point &	operator=(Point const &p);
    Fixed const getX() const;
    Fixed const getY() const;
};

Fixed area(Point const a, Point const b, Point const c);
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif

//
// A(1,2)    |2 1 1|
// B(3,0)    |3 0 1| = {(2*0*0 + 1*1*1 + 1*3*4) - (1*0*1 + 1*3*1 + 2*4*1)}
// C(1,4)    |1 4 1|
//
//
//
