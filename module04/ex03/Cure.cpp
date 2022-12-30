#include "Cure.hpp"

Cure::Cure()
{
    this->type = "cure";
}

Cure::~Cure()
{
    
}

std::string const &Cure::getType() const
{
    return this->type;
}

AMateria *Cure::clone() const
{
    AMateria *am = new Cure();
    return am;
}

void Cure::use(ICharacter &target)
{
    std::cout << "Cure : * heals " << target.getName() << " 's wounds *" << std::endl;
}

Cure &Cure::operator=(Cure const &cpy)
{
    this->type = cpy.type;
    return *this;
}
Cure::Cure(Cure const &cpy)
{
    *this = cpy;
}