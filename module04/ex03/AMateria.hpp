#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include "ICharacter.hpp"
class ICharacter;
class AMateria
{
protected:
    std::string type;

public:

    AMateria(std::string const &type);
    AMateria();
    virtual std::string const &getType() const;
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
    virtual ~AMateria(){}
};

#endif

