#include "Animal.hpp"


Animal::Animal()
{
    std::cout<<"Animal : Default constructor called\n";
}
Animal::Animal(std::string type)
{
    this->type = type;
    std::cout<<"Animal : Parameterized Constructor called\n";
}

Animal::Animal(Animal const &cpy)
{
    *this = cpy;
    std::cout<<"Animal : Copy constructor\n";
}
Animal &Animal::operator=(Animal const &cpy)
{
    this->type = cpy.type;
    std::cout<<"Copy assignment operator\n";
    return *this;
}
Animal::~Animal()
{
    std::cout<<"Animal : destructor called\n";
}

std::string Animal::getType() const
{
    return this->type;
}