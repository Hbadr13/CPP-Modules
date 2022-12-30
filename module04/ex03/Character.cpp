#include "Character.hpp"
Character ::Character()
{
    int i = 0;
    while (i < SIZE)
    {
        this->inventory[i] = nullptr;
        i++;
    }
    this->nub_Amateria_in_inventory = 0;
    this->name = "Unknown";
}

Character ::Character(std::string name)
{
    int i = 0;
    while (i < SIZE)
    {
        this->inventory[i] = nullptr;
        i++;
    }
    this->nub_Amateria_in_inventory = 0;
    this->name = name;
}

Character ::~Character()
{
    int i = 0;
    while (i < SIZE)
    {
        if (this->inventory[i])
        {
            std::cout << "Character : has delete " << this->inventory[i]->getType() << std::endl;
            delete (this->inventory[i]);
        }
        i++;
    }
}

void Character::equip(AMateria *m)
{
    int i = 0;
    if (!m)
        return;
    if (this->nub_Amateria_in_inventory >= SIZE)
    {
        std::cout << "Character::equip   : Inventory is full .\n";
        return;
    }
    while (i < SIZE) // fi7alat ila 3awd dawar nafs lmateria
    {
        if (this->inventory[i] == m)
        {
            std::cout << "Character::equip   => " << m->getType() << " : already in inventory.\n";
            return;
        }
        i++;
    }

    i = 0;
    while (i < SIZE)
    {
        if (!this->inventory[i])
        {
            this->inventory[i] = m;
            this->nub_Amateria_in_inventory++;
            std::cout << "Character::equip   => " << m->getType() << " : Added to Inventory.\n";
            break;
        }
        i++;
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > SIZE - 1) // SIZE = 4 ,and index between {0, 3}
    {
        std::cout << "Character::unequip => Index Incorrect.\n";
        return;
    }
    else if (!this->inventory[idx])
    {
        std::cout << "Character::unequip => This AMateria does not exist .\n";
        return;
    }
    else if (this->inventory[idx])
    {
        this->nub_Amateria_in_inventory--;
        std::cout << "Character::unequip => Has been deleted " << this->inventory[idx]->getType() << " from inventory.\n";
        while (idx < SIZE - 1)
        {
            this->inventory[idx] = this->inventory[idx + 1];
            idx++;
        }
        this->inventory[idx] = nullptr;
        return;
    }
}

void Character ::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx > SIZE - 1) // SIZE = 4 ,and index between {0, 3}
    {
        std::cout << "Character::use     => Index Incorrect.\n";
        return;
    }
    else if (idx >= this->nub_Amateria_in_inventory)
    {
        std::cout << "Character::use     => Ihis AMateria is empty .\n";
        return;
    }
    if (!this->inventory[idx])
    {
        std::cout << "Character::use     => makaynx mol had lindex\n";
        return;
    }
    this->inventory[idx]->use(target);
}

std::string const &Character ::getName() const
{
    return this->name;
}

Character::Character(Character const &cpy)
{
    int i = 0;
    while (i < SIZE)
    {
        this->inventory[i] = nullptr;
        i++;
    }
    this->nub_Amateria_in_inventory = 0;
    this->name = "Unknown";
    *this = cpy;
}

Character &Character::operator=(Character const &cpy)
{
    if (this != &cpy)
    {
        int i = 0;
        while (i < SIZE)
        {
            if (this->inventory[i])
            {
                delete (this->inventory[i]);
                this->inventory[i] = cpy.inventory[i]->clone();
            }
            i++;
        }
        this->name = cpy.name;
        this->nub_Amateria_in_inventory = cpy.nub_Amateria_in_inventory;
    }
    return *this;
}
