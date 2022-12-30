#include "Brain.hpp"

Brain::Brain()
{
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = "Nothing !";
        i++;
    }
    std::cout << "Brain  : Default constructor called\n";
}

Brain::Brain(std::string *ideass)
{
    if (!ideass)
        exit(1);
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = ideas[i];
        i++;
    }
    std::cout << "Brain  : Parameterized Constructor called\n";
}

Brain::Brain(Brain const &cpy)
{
    *this = cpy;
    std::cout << "Brain  : Copy constructor\n";
}
Brain &Brain::operator=(Brain const &cpy)
{
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = cpy.ideas[i];
        i++;
    }

    std::cout << "Brain  : Copy assignment operator\n";
    return *this;
}

std::string *Brain::getideas()
{
    return this->ideas;
}

Brain::~Brain()
{
    std::cout << "Brain  : destructor called\n";
}
