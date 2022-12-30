/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:20:42 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/08 19:20:44 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM

#include "fstream"
#include "Form.hpp"

class PresidentialPardonForm  : public Form
{
private:
    std::string target;

public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const &cpy);
    PresidentialPardonForm &operator=(PresidentialPardonForm const &cpy);
    ~PresidentialPardonForm();
    void execute(Bureaucrat const & executor) const;
};

#endif
