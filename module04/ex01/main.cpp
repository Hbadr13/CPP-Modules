#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include <string>

std::string *return_ideas(std::string type)
{
    std::string *ideas = new std::string[100];
    int i = 0;
    while (i < 100)
    {
        ideas[i] = type + " idea number " + std::to_string(i);
        i++;
    }
    return ideas;
}

int main()
{

    Cat *cat2 = new Cat("Tom", return_ideas("Tom"));
    Cat *dog2 = new Cat("Spike", return_ideas("Cat"));

    Animal *ani[4];
    ani[0] = new Dog("dog1", return_ideas("dog1"));
    ani[1] = new Dog("dog2", return_ideas("dog2"));
    ani[0] = new Cat("cat1", return_ideas("cat1"));
    ani[1] = new Cat("cat2", return_ideas("cat2"));

    int i = 0;
    while (i < 4)
    {
        delete ani[i];
        i++;
    }
    delete(dog2);
    delete(cat2);
    system("leaks Animal");
}
