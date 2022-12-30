#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
    Point a(1.0f, 1.0f);
    Point b(3.0f, 3.0f);
    Point c(5.0f, 1.0f);
    Point x_insd(3.0f, 2.0f);
    Point y_on_edge(3.0f, 1.0f);
    Point z_not_inds(-1.0f, 0.0f);

    if (bsp(a, b, c, x_insd))
        std::cout << "the point X is inside the triangle (ABC)\n";
    else
        std::cout << "Point X is not inside triangle (ABC)\n";

    std::cout << "------\n";
    if (bsp(a, b, c, y_on_edge))
        std::cout << "the point Y is inside the triangle (ABC)\n";
    else
        std::cout << "Point Y is not inside triangle (ABC)\n";

    std::cout << "------\n";
    if (bsp(a, b, c, z_not_inds))
        std::cout << "the point Z is inside the triangle (ABC)\n";
    else
        std::cout << "Point Z is not inside triangle (ABC)\n";
    return 0;
}
