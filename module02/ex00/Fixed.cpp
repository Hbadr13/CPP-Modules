#include "Fixed.hpp"

//{*----------- constructor -----------*}//

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    this->fixed_point = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}
Fixed::Fixed(Fixed const &fix)
{
    std::cout << "Copy constructor called\n";
    this->fixed_point = fix.getRawBits();
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

//{*----------- operator -----------*}//


Fixed &Fixed::operator=(Fixed const &fix)
{
    std::cout << "Copy assignment operator called\n";
    fixed_point = fix.getRawBits();
    return *this;
}
