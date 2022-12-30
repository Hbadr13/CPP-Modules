/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:22:34 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/08 19:22:36 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm : Default constructor called !\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Tom", 72, 45)
{
    this->target = target;
    std::cout << "RobotomyRequestForm : Parameterized constructor called !\n";
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy)
{
    *this = cpy;
    std::cout << "RobotomyRequestForm :  A copy constructor.\n";
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &cpy)
{
    std::cout << "RobotomyRequestForm : copy assignment operator overload.\n";
    this->target = cpy.target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm : destructor called\n";
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{

    int tim;
    if (this->getSign_() == false)
        throw Form::FormNotSigned();
    if (executor.getGrade() > this->getGradetoexecute_())
        throw Form::GradeTooLowException();

    tim = time(NULL); // seconds has passed since 00:00:00 GMT, Jan 1, 1970
    std::cout << "RobotomyRequestForm :";
    if (tim % 2 == 0)
        std::cout << this->target << " has been robotomized\n";
    else
        std::cout << "the robotomy failed.\n";
}
