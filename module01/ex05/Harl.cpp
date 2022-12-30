/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:57:56 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/08 20:57:57 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}
void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-"
         << "cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put"
         << "enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for"
         << "years whereas you started working here since last month.\n";
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{
    int i = 0;
    std::string tab_levels[4];
    void (Harl::*ptr[4])(void);
    ptr[0] = &Harl::debug;
    ptr[1] = &Harl::info;
    ptr[2] = &Harl::warning;
    ptr[3] = &Harl::error;
    tab_levels[0] = "DEBUG";
    tab_levels[1] = "INFO";
    tab_levels[2] = "WARNING";
    tab_levels[3] = "ERROR";
    std::cout << "---------------\n";
    while (i < 4)
    {
        if (level.compare(tab_levels[i]) == 0)
        {
            std::cout << "[ " << tab_levels[i] << " ]\n";
            (this->*ptr[i])();
            std::cout << std::endl;
            return ;
        }
        i++;
    }
    std::cout << "Not fond!\n";
}
