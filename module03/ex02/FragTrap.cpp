/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:16:57 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/28 17:16:58 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap : Default constructor called\n";
}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    this->hit_points = 100;
    this->energy_pt = 100;
    this->attack_damage = 30;
    std::cout << KGREEN << "FragTrap : " << KNORMAL << "Parameterized Constructor called\n";
}

FragTrap::FragTrap(FragTrap const &cpy)
{
    *this = cpy;
    std::cout << KGREEN << "FragTrap : " << KNORMAL << "Copy constructor\n";
}

FragTrap &FragTrap::operator=(FragTrap const &cpy)
{
    this->name = cpy.name;
    this->hit_points = cpy.hit_points;
    this->energy_pt = cpy.energy_pt;
    this->attack_damage = cpy.attack_damage;
    std::cout << KGREEN << "FragTrap : " << KNORMAL << "Copy constructor\n";
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << KGREEN << "FragTrap :" << KNORMAL << " Destructor called\n";
}

void FragTrap::highFivesGuys()
{
    std::cout << KGREEN << "FragTrap : " << KNORMAL << " wants to higt fives!\n";
}
