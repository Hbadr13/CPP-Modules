#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
    Brain *_brain;

public:
    Cat();
    Cat(std::string type);
    Cat(std::string type, std::string *ideas);
    Cat(Cat const &cpy);
    Cat &operator=(Cat const &cpy);
    std::string getType() const;
    ~Cat();
    void makeSound() const;

    Brain *get_brain() const;
};

#endif