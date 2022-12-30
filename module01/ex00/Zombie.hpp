/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:52:12 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/08 20:52:15 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include<stdlib.h>
#include<string.h>
class Zombie
{
private:
    std::string name;

public:
    Zombie ();
    Zombie (std::string name);
    void announce(void);
    ~Zombie();
};

Zombie *newZombie(std::string name );
void    randomChump(std::string name );
#endif
