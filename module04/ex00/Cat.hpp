#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(std::string type);
    Cat(Cat const &cpy);
    Cat &operator=(Cat const &cpy);
    std::string getType() const;
    ~Cat();
    void makeSound() const;
};

#endif
