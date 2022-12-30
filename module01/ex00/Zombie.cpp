#include "Zombie.hpp"
// -----------> constructor <----------//
Zombie::Zombie()
{
}
Zombie::Zombie(std::string name)
{
    this->name = name;
}

// -----------> destructor <-----------//
Zombie::~Zombie()
{
    std::cout << "the zombie " << this->name << " is delete\n";
}

// --------> member function <---------//
void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
