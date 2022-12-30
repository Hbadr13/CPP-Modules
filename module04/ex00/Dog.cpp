#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog    : Default constructor called\n";
}

Dog::Dog(std::string type)
{
    this->type = type;
    std::cout << "Dog    : Parameterized Constructor called\n";
}

Dog::Dog(Dog const &cpy)
{
    *this = cpy;
    std::cout << "Dog     : Copy constructor\n";
}
Dog &Dog::operator=(Dog const &cpy)
{
    this->type = cpy.type;
    std::cout << "Dog    :Copy assignment operator\n";
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog    : destructor called\n";
}

std::string Dog::getType() const
{
    return this->type;
}

void Dog::makeSound() const
{
    std::cout << "haw haw haw ...\n";
}