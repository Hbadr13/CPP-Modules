#include"Fixed.hpp"
//{*----------- constructor -----------*}//
Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    this->fixed_point = 0;
}

Fixed::Fixed(int const intgr)
{
    std::cout<<"Int constructor called\n";
    this->fixed_point = intgr << this->bits;
}

Fixed::Fixed(float const flot)
{
    std::cout<<"float constructor called\n";
    this->fixed_point = (int)round(flot * (1 << this->bits));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

Fixed::Fixed(Fixed const &fix)
{
    *this = fix;
    std::cout << "Copy constructor called\n";
}

//{*----------- member functions -----------*}//


int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return this->fixed_point;
}

void Fixed::setRawBits(int const raw)
{
    this->fixed_point = raw;
}


float Fixed::toFloat( void ) const
{
    float flo;
    flo = (float)this->fixed_point /(1 << this->bits);
    return flo;
}

int Fixed::toInt( void ) const
{
    int integr;
    integr = this->fixed_point >> this->bits;
    return integr;
}

//{*-----------  operators -----------*}//

Fixed &Fixed::operator=(Fixed const &fix)
{
    std::cout << "Copy assignment operator called\n";
    fixed_point = fix.fixed_point;
    return *this;
}

std::ostream &operator << (std::ostream &outt, Fixed const &fix)
{
    outt << fix.toFloat();
    return outt;
}
