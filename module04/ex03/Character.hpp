#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include "ICharacter.hpp"
#define SIZE 4 

class Character : public ICharacter
{
private:
    std::string name;
    AMateria *inventory[SIZE];
    int nub_Amateria_in_inventory;
public:
    Character();
    Character(Character const &cpy);
    Character &operator =(Character const &cpy);
    Character(std::string name);
     std::string const &getName() const;
     void equip(AMateria *m);
     void unequip(int idx);
     void use(int idx, ICharacter &target);
     ~Character();
};


#endif
