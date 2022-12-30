/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:15:20 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/28 17:15:21 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap1("tom");
    ClapTrap clap2("jerry");

    clap1.settakeDamage(2);
    clap1.status();
    clap2.status();

    clap1.fight(clap2);
    clap2.status();
    clap1.status();

    clap2.beRepaired(3);
    clap2.status();
}
