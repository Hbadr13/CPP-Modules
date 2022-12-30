#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(std::string type);
    Dog(Dog const &cpy);
    Dog &operator=(Dog const &cpy);
    std::string getType() const;
    ~Dog();
    void makeSound() const;
};

#endif