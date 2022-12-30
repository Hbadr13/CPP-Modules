/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:19:37 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/08 19:19:39 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

// ----> constructor && destructor <---- //

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat: Default constructor called !\n";
}

Bureaucrat::Bureaucrat(std::string const &n, int grd) : name(n)
{

    std::cout << "Bureaucrat: Parameterized Constructor called !\n";
    if (grd > LOW_POS_GRADE)
        throw Bureaucrat::GradeTooLowException();
    else if (grd < HIGH_POS_GRADE)
        throw Bureaucrat::GradeTooHighException();
    this->grade = grd;
    std::cout << "Bureaucrat " << this->name << " has been created and grade = " << this->grade << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &cpy)
{
    *this = cpy;
    std::cout << "Bureaucrat : copy constructor.\n";
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat : destructor called\n";
}

// -----------> operatorr = <----------- //

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &cpy)
{
    std::cout << "Copy assignment operator called\n";
    if (this == &cpy)
        return *this;
    new (this) Bureaucrat(cpy.name, cpy.grade);
    return *this;
}

// --------> member functions <------- //

void Bureaucrat::increment(int n)
{
    if (n < 0)
        throw Bureaucrat::GradeIsNegative();
    this->grade += n;
    if (this->grade > LOW_POS_GRADE)
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::decrement(int n)
{
    if (n < 0)
        throw Bureaucrat::GradeIsNegative();
    this->grade -= n;
    if (this->grade < HIGH_POS_GRADE)
        throw Bureaucrat::GradeTooHighException();
}

const std::string &Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

void Bureaucrat::signForm(Form const &form)
{
    if (form.getSign_() == true)
        std::cout << "Bureaucrat: " << this->getName() << " signed Form: " << form.getName_() << std::endl;
    else
    {
        std::cout << "Bureaucrat : " << this->getName() << " couldn't sign " << form.getName_()
                  << " because \n";
        if (this->getGrade() <= form.getGradtosigned_())
            throw Bureaucrat::ItWillBeSignedLater();
        else
            throw Bureaucrat::GradeTooLowException();
    }
}

// -----------> operatorr << <----------- //

std::ostream &operator<<(std::ostream &outp, Bureaucrat const &burea)
{
    outp << "Bureaucrat : " << burea.getName() << ", bureaucrat grade " << burea.getGrade() << "." << std::endl;
    return outp;
}
