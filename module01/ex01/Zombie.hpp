/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:53:21 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/08 20:54:55 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string.h>
#define NUM_Z 8

class Zombie
{
private:
    std::string name;

public:
    Zombie ();
    Zombie (std::string name);
    void setname(std::string name);
    void announce(void);
    ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif
