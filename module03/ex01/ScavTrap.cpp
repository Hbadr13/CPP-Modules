/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:15:52 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/28 17:15:54 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap : Default constructor called\n";
}

ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    this->hit_points = 100;
    this->energy_pt = 50;
    this->attack_damage = 20;
    std::cout << KGREEN << "ScavTrap :" << KNORMAL << " Parameterized Constructor called\n";
}

ScavTrap::ScavTrap(ScavTrap const &cpy)
{
    this->name = cpy.name;
    this->hit_points = cpy.hit_points;
    this->energy_pt = cpy.energy_pt;
    this->attack_damage = cpy.attack_damage;
    std::cout << KGREEN << "ScavTrap :" << KNORMAL << " Copy constructor\n";
}

ScavTrap &ScavTrap::operator=(ScavTrap const &cpy)
{
    this->name = cpy.name;
    this->hit_points = cpy.hit_points;
    this->energy_pt = cpy.energy_pt;
    this->attack_damage = cpy.attack_damage;
    std::cout << KGREEN << "ScavTrap :" << KNORMAL << " Copy constructor\n";
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << KGREEN << "ScavTrap :" << KNORMAL << " Destructor called\n";
}

void ScavTrap::guardGate()
{
    std::cout << KGREEN << "ScavTrap : " << KNORMAL << this->name << " is now in Gate keeper mode.\n";
}

void ScavTrap::attack(const std::string &target)
{
    std::cout << KGREEN << "ScavTrap :" << KNORMAL << this->name << " attacks " << target << " causing " << this->attack_damage << " points of damage !\n";
    this->energy_pt -= 1;
}

void ScavTrap::fight(ScavTrap &clap2)
{

    if (this->energy_pt <= 0)
    {
        std::cout << KGREEN << "ScavTrap :" << KNORMAL << this->name << " is out of energy !\n";
        return;
    }
    else if (this->hit_points <= 0)
    {
        std::cout << KGREEN << "ScavTrap :" << KNORMAL << this->name << " run out of hit points !\n";
        return;
    }
    this->attack(clap2.name);
    clap2.takeDamage(this->attack_damage);
}
