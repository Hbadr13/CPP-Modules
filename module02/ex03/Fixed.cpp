#include "Fixed.hpp"
//{*----------- constructor -----------*}//
Fixed::Fixed()
{
    this->fixed_point = 0;
}
Fixed::Fixed(int const intgr)
{
    this->fixed_point = intgr << this->bits;
}

Fixed::Fixed(float const flot)
{
    this->fixed_point = (int)round(flot * (1 << this->bits));
}

Fixed::~Fixed()
{
}
Fixed::Fixed(Fixed const &fix)
{
    *this = fix;
}

//{*----------- member functions -----------*}//

int Fixed::getRawBits(void) const
{
    return this->fixed_point;
}
void Fixed::setRawBits(int const raw)
{
    this->fixed_point = raw;
}

float Fixed::toFloat(void) const
{
    float flo;
    flo = (float)this->fixed_point / (1 << this->bits);
    return flo;
}
int Fixed::toInt(void) const
{
    int integr;
    integr = this->fixed_point >> this->bits;
    return integr;
}

//{*-----------  operators -----------*}//

Fixed &Fixed::operator=(Fixed const &fix)
{
    fixed_point = fix.fixed_point;
    return *this;
}

std::ostream &operator<<(std::ostream &outt, Fixed const &fix)
{
    outt << fix.toFloat();
    return outt;
}

//{*-----------  comparison operators -----------*}//

bool Fixed::operator>(Fixed const &fix) const
{
    if (this->fixed_point > fix.fixed_point)
        return 1;
    return 0;
}

bool Fixed::operator<(Fixed const &fix) const
{
    return this->fixed_point < fix.fixed_point;
}

bool Fixed::operator>=(Fixed const &fix) const
{
    return this->fixed_point >= fix.fixed_point;
}

bool Fixed::operator<=(Fixed const &fix) const
{
    return this->fixed_point <= fix.fixed_point;
}

bool Fixed::operator==(Fixed const &fix) const
{
    return this->fixed_point == fix.fixed_point;
}

bool Fixed::operator!=(Fixed const &fix) const
{
    return this->fixed_point != fix.fixed_point;
}

//{*-----------  arithmetic operators -----------*}//
Fixed Fixed::operator+(Fixed const &fix) const
{
    Fixed newfx;
    newfx.setRawBits(this->fixed_point + fix.fixed_point);

    return newfx;
}

Fixed Fixed::operator*(Fixed const &fix) const
{
    Fixed newfx;
    int fixd;
    fixd = (this->fixed_point * fix.fixed_point) >> bits;
    newfx.setRawBits(fixd);

    return newfx;
}

Fixed Fixed::operator - (Fixed const &fix) const
{
    Fixed newfx;
    newfx.setRawBits(this->fixed_point - fix.fixed_point);

    return newfx;
}

Fixed Fixed::operator / (Fixed const &fix) const
{
    Fixed newfx;
    int fixd;
    if((fix.fixed_point >> bits) == 0)
    {
        std::cout<<"Infinity :: number / 0\n";
        exit(1);
    }
    fixd = (this->fixed_point  ) / (fix.fixed_point >> bits);
    newfx.setRawBits(fixd);

    return newfx;
}

//{*----------- increment/ decrement -----------*}//
Fixed Fixed::operator ++ ()
{
  
    this->fixed_point ++;
    return *this;
}

Fixed Fixed::operator -- ()
{
  
    this->fixed_point --;
    return *this;
}

Fixed Fixed::operator ++ (int)
{
    Fixed fix;
    fix = *this;
    this->fixed_point++;
    return fix;
}

Fixed Fixed::operator -- (int)
{
    Fixed fix;
    fix = *this;
    this->fixed_point--;
    return fix;
}

//{*---- overloaded member functions ----*}//

Fixed &Fixed::min(Fixed &fx1, Fixed &fx2)
{
    if(fx1 < fx2)
        return fx1;
    return fx2;
}

Fixed const &Fixed::min(Fixed const &fx1, Fixed const &fx2)
{
    if(fx1 < fx2)
        return fx1;
    return fx2;
}

Fixed &Fixed::max(Fixed &fx1, Fixed &fx2)
{
    if(fx1 > fx2)
        return fx1;
    return fx2;
}

Fixed const &Fixed::max(Fixed const &fx1, Fixed const &fx2)
{
    if(fx1 > fx2)
        return fx1;
    return fx2;
}
