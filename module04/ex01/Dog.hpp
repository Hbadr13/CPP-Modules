
#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{

private:
    Brain *_brain;

public:
    Dog();
    Dog(std::string type);
    Dog(std::string type, std::string *ideas);
    Dog(Dog const &cpy);
    Dog &operator=(Dog const &cpy);
    std::string getType() const;
    ~Dog();
    void makeSound() const;
    Brain *get_brain() const;
};

#endif
