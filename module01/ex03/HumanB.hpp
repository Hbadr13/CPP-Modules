/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:56:35 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/08 20:56:43 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"
class HumanB
{
    Weapon      *Wpn;
    std::string name;

public:
    HumanB(std::string name);
    void setWeapon(Weapon &Wpn);
    void attack();
    ~HumanB();
};
#endif
