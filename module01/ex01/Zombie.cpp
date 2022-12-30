/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:53:16 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/08 20:55:43 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}
Zombie::Zombie(std::string name)
{
    this->name = name;
}
void Zombie::setname(std::string name)
{
    this->name = name;
}
void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::~Zombie()
{
    std::cout << "the zombie " << this->name << " is delete\n";
}
