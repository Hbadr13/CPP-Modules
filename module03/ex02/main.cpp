/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:17:22 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/28 17:17:23 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap clap1("tom");
    FragTrap clap2("jerry");

    clap1.status();
    clap2.status();

    clap1.fight(clap2);
    clap2.status();
    clap1.status();

    clap2.beRepaired(30);
    clap2.status();
    clap1.highFivesGuys();
}
