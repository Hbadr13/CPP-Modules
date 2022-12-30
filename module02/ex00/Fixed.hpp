#include <iostream>

class Fixed
{
private:
    int fixed_point;
    static const int bits = 8;

public:
    Fixed();
    ~Fixed();
    Fixed(Fixed const &fix);
    int getRawBits(void) const;
    void setRawBits(int const raw);

    Fixed &operator=(Fixed const &fix);
};