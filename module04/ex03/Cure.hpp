
#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria
{
private:

public:
    Cure();
    Cure(Cure const &cpy);
    ~Cure();
    std::string const &getType() const;
    AMateria *clone() const;
    void use(ICharacter &target);
    Cure &operator=(Cure const &cpy);
};

#endif
