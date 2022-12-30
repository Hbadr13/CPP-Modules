
#include "Cat.hpp"

Cat::Cat()
{
    _brain = new Brain();
    std::cout << "Cat    : Default constructor called\n";
}

Cat::Cat(std::string type)
{
    this->type = type;
    std::cout << "Cat    : Parameterized Constructor called [type]\n";
}

Cat::Cat(std::string type, std::string *ideas)
{
    _brain = new Brain(ideas);
    this->type = type;
    std::cout << "Cat    : Parameterized Constructor called\n";
}

Cat::Cat(Cat const &cpy)
{
    this->_brain = NULL;
    *this = cpy;
    std::cout << "Cat    : Copy constructor\n";
}

Cat &Cat::operator=(Cat const &cpy)
{
    this->type = cpy.type;
    if (this != &cpy)
    {
        if (this->_brain)
            delete (this->_brain);
        this->_brain = new Brain(cpy.get_brain()->getideas());
    }
    std::cout << "Cat : Copy assignment operator\n";
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat    : destructor called\n";
    delete _brain;
}

std::string Cat::getType() const
{

    return this->type;
}

Brain *Cat::get_brain() const
{
    return this->_brain;
}

void Cat::makeSound() const
{
    std::cout << "myyyaw ...\n";
}
