#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include <string>

int main()
{
    // const Animal *meta = new Animal();
    const Animal *i = new Cat("Tom");
    const Animal *j = new Dog("Spike");

    std::cout << "---------------------------\n\n";

    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << std::endl;
    i->makeSound();
    j->makeSound();

    std::cout << "\n---------------------------\n";

    delete (j);
    delete (i);
    system("leaks Animal");
 
}
