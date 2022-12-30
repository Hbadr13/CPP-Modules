/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:17:56 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/28 17:17:57 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
    /* data */
public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap(FragTrap const &cpy);
    FragTrap &operator=(FragTrap const &cpy);

    void highFivesGuys();
};

#endif
