#include "Cat.hpp"
Cat::Cat()
{
    std::cout << "Cat    : Default constructor called\n";
    _brain = new Brain();
}

Cat::Cat(std::string type)
{
    std::cout << "Cat    : Parameterized Constructor called [type]\n";
    _brain = new Brain();
    this->type = type;
}

Cat::Cat(std::string type, std::string *ideas)
{
    std::cout << "Cat    : Parameterized Constructor called [type, ideas]\n";
    _brain = new Brain(ideas);
    this->type = type;
}

Cat::Cat(Cat const &cpy)
{
    std::cout << "Cat    : Copy constructor\n";
    this->_brain = NULL;
    *this = cpy;
}

Cat &Cat::operator = (Cat const &cpy)
{
    std::cout << "Cat    : Copy assignment operator\n";
    this->type = cpy.type;
    if (this != &cpy)
    {
        std::cout << this << " " << &cpy << "\n";
        if (this->_brain)
            delete (this->_brain);
        this->_brain = new Brain(cpy.get_brain()->getideas());
    }
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
