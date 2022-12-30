#include "Ice.hpp"

Ice::Ice()
{
    this->type = "ice";
}

Ice::~Ice()
{
}

std::string const &Ice::getType() const
{
    return this->type;
}

AMateria *Ice::clone() const
{
    AMateria *am = new Ice();
    return am;
}

void Ice::use(ICharacter &target)
{
    std::cout << "Ice : * shoots an ice bolt at  " << target.getName() << " *" << std::endl;
}

Ice &Ice::operator=(Ice const &cpy)
{
    this->type = cpy.type;
    return *this;
}

Ice::Ice(Ice const &cpy)
{
    *this = cpy;
}
