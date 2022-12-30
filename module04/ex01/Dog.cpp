
#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog    : Default constructor called\n";
    _brain = new Brain();
}

Dog::Dog(std::string type)
{
    this->type = type;
    std::cout << "Dog    : Parameterized Constructor called [type]\n";
}

Dog::Dog(std::string type, std::string *ideas)
{
    _brain = new Brain(ideas);
    this->type = type;
    std::cout << "Dog    : Parameterized Constructor called\n";
}

Dog::Dog(Dog const &cpy)
{
    this->_brain = NULL;
    *this = cpy;
    std::cout << "Dog     : Copy constructor\n";
}

Dog &Dog::operator=(Dog const &cpy)
{
    if (this != &cpy)
    {
        if (this->_brain)
            delete (this->_brain);
        this->_brain = new Brain(cpy.get_brain()->getideas());
    }
    this->type = cpy.type;
    std::cout << "Dog    :Copy assignment operator\n";
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog    : destructor called\n";
    delete (this->_brain);
}

std::string Dog::getType() const
{
    return this->type;
}

Brain *Dog::get_brain() const
{
    return this->_brain;
}

void Dog::makeSound() const
{
    std::cout << "haw haw haw ...\n";
}
