/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:16:11 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/28 17:16:12 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap clap1("tom");
    ScavTrap clap2("jerry");

    clap1.status();
    clap2.status();

    clap1.fight(clap2);
    clap2.status();
    clap1.status();

    clap2.beRepaired(30);
    clap2.status();
    clap1.guardGate();
}
