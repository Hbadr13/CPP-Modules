#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
    /* data */
public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap(FragTrap const &cpy);
    FragTrap &operator=(FragTrap const &cpy);
    void highFivesGuys();
};

#endif
