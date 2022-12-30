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
    Fixed();
    Fixed(int const intgr);
    Fixed(float const intgr);
    Fixed(Fixed const &fix);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat( void ) const;
    int toInt( void ) const;

    Fixed &operator=(Fixed const &fix);

    //{*---  comparison operators ---*}//
    bool operator > (Fixed const &fix) const ;
    bool operator < (Fixed const &fix) const ;
    bool operator >= (Fixed const &fix) const ;
    bool operator <= (Fixed const &fix) const ;
    bool operator == (Fixed const &fix) const;
    bool operator != (Fixed const &fix) const;
    //{*---- arithmetic operators ---*}//
    Fixed operator + (Fixed const &fix) const;
    Fixed operator * (Fixed const &fix) const;
    Fixed operator - (Fixed const &fix) const;
    Fixed operator / (Fixed const &fix) const;
    //{*---- increment/ decrement ---*}//
    Fixed operator ++();
    Fixed operator --();
    Fixed operator ++(int);
    Fixed operator --(int);
    //{* overloaded member functions *}//
    static Fixed &min(Fixed  &fx1, Fixed &fx2);
    static Fixed const &min(Fixed const &fx1, Fixed const &fx2);
    static Fixed &max(Fixed  &fx1, Fixed &fx2);
    static Fixed const &max(Fixed const &fx1, Fixed const &fx2);    
};
std::ostream &operator << (std::ostream &outt, Fixed const &fix);
#endif