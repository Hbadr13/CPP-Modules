/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:21:09 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/08 19:21:12 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm : Default constructor called !\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Tom", 25, 5)
{
    this->target = target;
    std::cout << "PresidentialPardonForm : Parameterized constructor called !\n";
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cpy)
{
    *this = cpy;
    std::cout << "PresidentialPardonForm :  A copy constructor.\n";
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &cpy)
{
    std::cout << "PresidentialPardonForm : copy assignment operator overload.\n";
    this->target = cpy.target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm : destructor called\n";
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (this->getSign_() == false)
        throw Form::FormNotSigned();
    if (executor.getGrade() > this->getGradetoexecute_())
        throw Form::GradeTooLowException();
    std::cout << this->target << "PresidentialPardonForm : has been pardoned by Zaphod Beeblebrox.\n";
}
