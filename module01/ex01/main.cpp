/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:54:59 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/08 20:55:02 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int i;
    Zombie *zomb;
    zomb = zombieHorde(NUM_Z, "Zombie");
    i = 0;
    while(i < NUM_Z)
    {
        zomb[i].announce();
        i++;
    }
    delete []zomb;
    std::cout<<"\n-------------> leaks <-------------\n\n";
    system("leaks Zombie");
}
