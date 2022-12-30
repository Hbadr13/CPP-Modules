/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:18:25 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/28 17:18:27 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
DiamondTrap::DiamondTrap()
{
    std::cout << KRED << "DiamondTrap : " << KNORMAL << "Default constructor called\n";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name.append("_clap_name")), FragTrap(name), ScavTrap(name)
{
    this->name = name;

    std::cout << KRED << "DiamondTrap : " << KNORMAL << "Parameterized Constructor called\n";
}

DiamondTrap::DiamondTrap(DiamondTrap const &cpy)
{
    *this = cpy;
    std::cout << KRED << "DiamondTrap : " << KNORMAL << "Copy constructor\n";
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &cpy)
{
    this->name = cpy.name;
    this->hit_points = cpy.hit_points;
    this->energy_pt = cpy.energy_pt;
    this->attack_damage = cpy.attack_damage;
    std::cout << KRED << "DiamondTrap : " << KNORMAL << "Copy assignment operator\n";
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << KRED << "DiamondTrap : " << KNORMAL << "Destructor called\n";
}

void DiamondTrap::whoAmI()
{
    std::cout << KRED << "DiamondTrap : " << KNORMAL << " DiamondTrap name " << this->name
              << " ClapTrap name " << ClapTrap::name << std::endl;
}
