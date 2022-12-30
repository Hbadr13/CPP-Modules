/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:19:07 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/28 17:19:11 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap clap1("tom");
    DiamondTrap clap2("jerry");

    clap1.status();
    clap2.status();

    clap1.fight(clap2);
    clap2.status();
    clap1.status();

    clap2.beRepaired(30);
    clap2.status();
    clap1.highFivesGuys();
    clap2.whoAmI();
}
