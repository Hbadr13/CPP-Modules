#include "Cat.hpp"
Cat::Cat()
{
    std::cout << "Cat    : Default constructor called\n";
}

Cat::Cat(std::string type)
{
    this->type = type;
    std::cout << "Cat    : Parameterized Constructor called\n";
}

Cat::Cat(Cat const &cpy)
{
    *this = cpy;
    std::cout << "Cat    : Copy constructor\n";
}
Cat &Cat::operator=(Cat const &cpy)
{
    this->type = cpy.type;
    std::cout << "Cat    : Copy assignment operator\n";
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat    : destructor called\n";
}

std::string Cat::getType() const
{

    return this->type;
}
void Cat::makeSound() const
{
    std::cout << "myyyaw ...\n";
}