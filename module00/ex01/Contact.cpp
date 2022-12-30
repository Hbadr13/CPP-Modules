/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:59:45 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/02 19:59:47 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
void Contact::init_contact(t_key info)
{
    this->firstname = info.key1;
    this->lastname = info.key2;
    this->nickname = info.key3;
    this->darkest_secret = info.key4;
    this->phone_number = info.key5;
}

void Display_string(std::string str)
{
    std::string dst;
    if (str.length() > 10)
    {
        dst.append(str, 0, 9);
        dst.append(".");
    }
    else if (str.length() < 10)
    {
        dst.append(10 - str.length(), ' ');
        dst.append(str);
    }
    else
        dst = str;
    std::cout << dst;
}

void Contact::print(int index)
{
    std::cout << "|";
    Display_string(std::to_string(index));
    std::cout << "|";
    Display_string(this->firstname);
    std::cout << "|";
    Display_string(this->nickname);
    std::cout << "|";
    Display_string(this->lastname);

    std::cout << "|\n";
    std::cout << " ____________________________________________\n";
}

std::string Contact::getname()
{
    return this->firstname;
}
