/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:56:16 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/08 20:56:18 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"
class HumanA
{
    Weapon      &Wpn;
    std::string name;

public:
    // HumanA();
    HumanA(std::string name, Weapon &wpn);
    void attack();
    ~HumanA();
};
#endif
