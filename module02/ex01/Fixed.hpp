#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <ostream>
#include <cmath>

class Fixed
{

private:
    int fixed_point;
    static const int bits = 8;

public:
    static int val;
    Fixed();
    Fixed(int const intgr);
    Fixed(float const intgr);
    Fixed(Fixed const &fix);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);

    Fixed &operator=(Fixed const &fix);

    float toFloat( void ) const;
    int toInt( void ) const;
};


std::ostream &operator << (std::ostream &outt, Fixed const &fix);
#endif
