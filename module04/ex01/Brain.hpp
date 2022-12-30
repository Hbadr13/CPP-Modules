#ifndef   BRAIN_HPP
#define   BRAIN_HPP
#include "Animal.hpp"

class Brain
{
    std::string ideas[100];
public:
    Brain();
    Brain(std::string *ideass);
    Brain(Brain const &cpy);
    Brain &operator=(Brain const &cpy);
    std::string *getideas() ;
    ~Brain();
};

#endif
