/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:56:22 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/08 20:56:23 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
HumanB::HumanB(std::string name)
{
    this->name = name;
}

void HumanB::setWeapon(Weapon &Wpn)
{
    this->Wpn = &Wpn;
}

void HumanB::attack()
{
    std::cout << this->name << "  attacks with their " << Wpn->getType() << std::endl;
}
HumanB::~HumanB()
{
}
