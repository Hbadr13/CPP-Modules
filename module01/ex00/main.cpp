/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:52:33 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/08 20:52:47 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie z1("Ragner");

    Zombie *z2;
    z2 = &z1;
    z1.announce();
    z2->announce();
    Zombie *z3 = newZombie("messii"); 
    z3->announce();
    delete(z3);
    randomChump("ronaldo");
}
