/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:22:17 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/08 19:22:19 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern: Default constructor called !\n";
}

Intern::Intern(Intern const &cpy)
{
    (void)cpy;
    std::cout << "Intern : copy constructor.\n";
}

Intern &Intern::operator=(Intern const &cpy)
{
    (void)cpy;
    std::cout << "Intern : Copy assignment operator called\n";
    return *this;
}

Intern::~Intern()
{
    std::cout << "Intern : destructor called\n";
}

Form *Intern::makeForm(std::string name_of_form, std::string target_of_form)
{
    std::string Shrubbery[3] = {"Bender", "Bender2", "Bender3"};
    std::string Robotomy[3] = {"rob1", "rob2", "rob3"};
    std::string Presidential[3] = {"shr1", "shr2", "shr3"};

    int i = 0;
    while (i < 3)
    {
        if (Shrubbery[i] == target_of_form)
        {
            std::cout << "Intern creates " << name_of_form << std::endl;
            return new ShrubberyCreationForm(target_of_form);
        }
        i++;
    }
    i = 0;
    while (i < 3)
    {
        if (Robotomy[i] == target_of_form)
        {
            std::cout << "Intern creates " << name_of_form << std::endl;
            return new RobotomyRequestForm(target_of_form);
        }
        i++;
    }
    i = 0;
    while (i < 3)
    {
        if (Presidential[i] == target_of_form)
        {
            std::cout << "Intern creates " << name_of_form << std::endl;
            return new PresidentialPardonForm(target_of_form);
        }
        i++;
    }
    throw Intern::FormNotExits();
}
