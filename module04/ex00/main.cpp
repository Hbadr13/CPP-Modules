#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
int main()
{
    const Animal *meta = new Animal();
    const Animal *i = new Cat("Tom");
    const Animal *j = new Dog("Spike");

    std::cout << "---------------------------\n\n";
    std::cout << meta->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << std::endl;
    i->makeSound(); 
    j->makeSound();
    meta->makeSound();
    std::cout << "\n---------------------------\n";
    meta->~Animal();
    j->~Animal();
    i->~Animal();
    
    ////////////////////
    // delete(meta);   /
    // delete(j);      /
    // delete(i);      /
    ////////////////////
    std::cout<<"\n------------ leaks -----------\n\n";
    system("leaks Animal");
}
