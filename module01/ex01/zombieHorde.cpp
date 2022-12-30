/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:55:06 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/08 20:55:08 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
        Zombie *zomb = new Zombie[N];
        int i = 0;

        while (i < N)
                zomb[i++].setname(name);
        return zomb;
}
