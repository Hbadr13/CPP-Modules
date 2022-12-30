/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:15:35 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/28 17:15:44 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_H 
#define CLAPTRAP_H
#include <iostream>
#include <string>

# define KRED  	"\x1B[31m"
# define KYELLOW "\x1B[32m"
# define KGREEN   "\x1B[33m"
# define KBLUE  "\x1B[34m"
# define KMAGENTA  "\x1B[35m"
# define KCYAN  "\x1B[36m"
# define KWHITE  "\x1B[37m"
# define KNORMAL  "\x1B[0m"

class ClapTrap
{
protected:
    std::string name;
    unsigned int hit_points;
    unsigned int energy_pt;
    unsigned int attack_damage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const &cpy);
    
    ~ClapTrap();

    ClapTrap &operator = (ClapTrap const &cpy);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
   
    void settakeDamage(unsigned int n);
    void status();
    void fight(ClapTrap &clap2);
};

#endif
