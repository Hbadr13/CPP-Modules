/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:18:30 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/28 17:18:31 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
    std::string name;

public:
    DiamondTrap(/* args */);
    ~DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap const &cpy);
    DiamondTrap &operator=(DiamondTrap const &cpy);
    void whoAmI();
};

#endif
