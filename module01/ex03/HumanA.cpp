/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:56:11 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/08 20:56:13 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
// HumanA::HumanA()
// {
    
// }
HumanA::HumanA(std::string name, Weapon &Wpn) :Wpn(Wpn)
{
    this->name = name;
    //this->Wpn = Wpn; // error
}

void HumanA::attack()
{
    std::cout << this->name << "  attacks with their " << Wpn.getType() << std::endl;
}

HumanA::~HumanA()
{

}

