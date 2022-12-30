
#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{
private:

public:
    Ice();
    ~Ice();
    Ice(Ice const &cpy);
    std::string const &getType() const;
    AMateria *clone() const;
    void use(ICharacter &target);
    Ice &operator=(Ice const &cpy);
};

#endif
