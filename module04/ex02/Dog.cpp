#include "Dog.hpp"

Dog::Dog()
{
    _brain = new Brain();
    std::cout << "Dog    : Default constructor called\n";
}
Dog::Dog(std::string type)
{
    _brain = new Brain();
    this->type = type;
    std::cout << "Dog    : Parameterized Constructor called [type]\n";
}

Dog::Dog(std::string type, std::string *ideas)
{
    _brain = new Brain(ideas);
    this->type = type;
    std::cout << "Dog    : Parameterized Constructor called [type, ideas]\n";
}

Dog::Dog(Dog const &cpy)
{
    this->_brain = NULL;
    *this = cpy;
    std::cout << "Dog    : Copy constructor\n";
}

Dog &Dog::operator=(Dog const &cpy)
{
    std::cout << "\n\n";
    this->type = cpy.type;
    if (this != &cpy)
    {
        if (this->_brain)
            delete (this->_brain);
        this->_brain = new Brain(cpy.get_brain()->getideas());
    }
    std::cout << "Dog    :Copy assignment operator\n";
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog    : destructor called\n";
    delete (_brain);
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