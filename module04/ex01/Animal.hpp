
#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
protected:
    std::string type;

public:
    Animal();
    Animal(std::string type);
    Animal(Animal const &cpy);
    Animal &operator=(Animal const &cpy);
    std::string getType() const;
    virtual ~Animal();
    virtual void makeSound() const;
};

#endif
