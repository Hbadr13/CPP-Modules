/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:59:54 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/02 20:00:01 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string>
#include "list.hpp"

class Contact
{
private:
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string darkest_secret;
    std::string phone_number;

public:
    void init_contact(t_key info);
    void print(int index);
    void display_contact(void);
    std::string getname(void);
};
#endif
