/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:00:05 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/02 20:00:12 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add(int index, t_key info)
{
    contac[index].init_contact(info);
}

void PhoneBook::display_contact(int index)
{
    if ((this->contac[index].getname()).empty() == 1)
    {
        std::cout << "Contact is empty\n";
        return;
    }
    std::cout << " ____________________________________________\n";
    std::cout << "|     index| firstname|  lastname|  nickname|\n";
    std::cout << " ____________________________________________\n";
    this->contac[index].print(index);
}

void PhoneBook::display_all_contact()
{
    int i;
    i = 0;
    std::string str;
    std::cout << " ____________________________________________\n";
    std::cout << "|     index| firstname|  lastname|  nickname|\n";
    std::cout << " ____________________________________________\n";
    while (1 && i < 8)
    {
        str = this->contac[i].getname();
        if (str.empty() == 1)
            break;
        this->contac[i].print(i);
        i++;
    }
}

bool ft_isNumber(std::string str)
{
    int i = -1;
    while (str[++i])
        if (isdigit(str[i]) == 0)
            return false;
    return true;
}
