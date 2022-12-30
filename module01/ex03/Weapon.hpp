/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:56:54 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/08 20:56:57 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H
#include<iostream>
#include <string>


class Weapon{
        std::string type;
    public:
        Weapon();
        Weapon(std::string type);
        void setType(std::string type);
        std::string getType();
};
#endif
