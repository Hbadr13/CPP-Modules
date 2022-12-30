/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:23:10 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/08 19:23:12 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN
#define INTERN
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

class Intern
{
private:
public:
    Intern();
    Intern(Intern const &cpy);
    Intern &operator=(Intern const &cpy);
    ~Intern();

    Form *makeForm(std::string name_of_form, std::string target_of_form);

    class FormNotExits : public std::exception
    {
        public:
        const char *what() const throw()
        {
            return "Intern : form not exits !";
        }
    };
};

#endif
