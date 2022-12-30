/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:16:21 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/28 17:16:23 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << KYELLOW << "ClapTrap : " << KNORMAL << "Default constructor called\n";
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->hit_points = 10;
    this->energy_pt = 10;
    this->attack_damage = 0;
    std::cout << KYELLOW << "ClapTrap : " << KNORMAL << "Parameterized Constructor called\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << KYELLOW << "ClapTrap : " << KNORMAL << "Destructor called\n";
}

ClapTrap::ClapTrap(ClapTrap const &cpy)
{
    std::cout << KYELLOW << "ClapTrap : " << KNORMAL << "Copy constructor\n";
    this->name = cpy.name;
    this->hit_points = cpy.hit_points;
    this->energy_pt = cpy.energy_pt;
    this->attack_damage = cpy.attack_damage;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &cpy)
{
    std::cout << KYELLOW << "ClapTrap : " << KNORMAL << "Copy assignment operator\n";
    this->name = cpy.name;
    this->hit_points = cpy.hit_points;
    this->energy_pt = cpy.energy_pt;
    this->attack_damage = cpy.attack_damage;
    return *this;
}

void ClapTrap::settakeDamage(unsigned int n)
{
    this->attack_damage = n;
}

void ClapTrap::attack(const std::string &target)
{
    std::cout << KYELLOW << "ClapTrap : " << KNORMAL << this->name << " attacks " << target << " causing " << this->attack_damage << " points of damage !\n";
    this->energy_pt -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount >= this->hit_points)
    {
        this->hit_points = 0;
        std::cout << KYELLOW << "ClapTrap : " << KNORMAL << this->name << " is dead\n";
        return;
    }
    std::cout << KYELLOW << "ClapTrap : " << KNORMAL << this->name << " tokes " << amount << " points of damage!\n";
    this->hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{

    std::cout << KYELLOW << "ClapTrap : " << KNORMAL << this->name << " repair itself, restore " << amount << " hit points!\n";
    this->hit_points += amount;
    this->energy_pt -= 1;
}

void ClapTrap::fight(ClapTrap &clap2)
{

    if (this->energy_pt <= 0)
    {
        std::cout << KYELLOW << "ClapTrap " << KNORMAL << this->name << " is out of energy !\n";
        return;
    }
    else if (this->hit_points <= 0)
    {
        std::cout << KYELLOW << "ClapTrap " << KNORMAL << this->name << " run out of hit points !\n";
        return;
    }
    attack(clap2.name);
    clap2.takeDamage(this->attack_damage);
}

void ClapTrap::status()
{
    std::cout << "-----------------------\n";
    std::cout << "name          : " << this->name << std::endl;
    std::cout << "Hit points    : " << this->hit_points << std::endl;
    std::cout << "Energy points : " << this->energy_pt << std::endl;
    std::cout << "Attack damage : " << this->attack_damage << std::endl;
    std::cout << "-----------------------\n\n";
}
