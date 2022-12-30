#ifndef BRAIN_HPP
#define BRAIN_HPP
#include "Animal.hpp"

class Brain
{
private:
    std::string ideas[100];

public:
    Brain();
    Brain(std::string *ideas);
    Brain(Brain const &cpy);
    Brain &operator=(Brain const &cpy);
    ~Brain();
    std::string *getideas();
};

#endif