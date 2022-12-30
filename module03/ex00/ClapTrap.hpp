/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:15:16 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/28 17:15:17 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <iostream>
#include <string>

class ClapTrap
{
private:
    std::string name;
    unsigned int hit_points;
    unsigned int energy_pt;
    unsigned int attack_damage;

public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const &cpy);

    ~ClapTrap();

    ClapTrap &operator=(ClapTrap const &cpy);

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void settakeDamage(unsigned int n);
    void status();
    void fight(ClapTrap &clap2);
};

#endif
