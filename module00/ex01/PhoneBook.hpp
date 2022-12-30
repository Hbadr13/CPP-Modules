/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:00:22 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/02 20:00:24 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:00:19 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/02 20:00:19 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include "list.hpp"
#include <iostream>
#include <string>

class PhoneBook
{
    private :
        Contact contac[8];
    public:
        void add(int index,t_key info);
        void display_all_contact();
        void display_contact(int index);
};
bool ft_isNumber(std::string str);

#endif 
