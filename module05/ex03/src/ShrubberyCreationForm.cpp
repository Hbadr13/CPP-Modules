/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:22:39 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/08 19:22:41 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm : Default constructor called !\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Tom", 145, 137)
{
    this->target = target;
    std::cout << "ShrubberyCreationForm : Parameterized constructor called !\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cpy)
{
    *this = cpy;
    std::cout << "ShrubberyCreationForm :  A copy constructor.\n";
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &cpy)
{
    std::cout << "ShrubberyCreationForm : copy assignment operator overload.\n";
    this->target = cpy.target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm : destructor called\n";
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    std::ofstream outfile;
    if (this->getSign_() == false)
        throw Form::FormNotSigned();
    if (executor.getGrade() > this->getGradetoexecute_())
        throw Form::GradeTooLowException();

    outfile.open(this->target + "_shrubbery");
    outfile << "        *        " << std::endl;
    outfile << "       ***       " << std::endl;
    outfile << "      *****      " << std::endl;
    outfile << "    *********    " << std::endl;
    outfile << "   ***********   " << std::endl;
    outfile << " *************** " << std::endl;
    outfile << "*****************" << std::endl;
    outfile << "        *        " << std::endl;
    outfile << "       ***       " << std::endl;
    outfile << "      *****      " << std::endl;
    outfile << "    *********    " << std::endl;
    outfile << "   ***********   " << std::endl;
    outfile << " **************  " << std::endl;
    outfile << "*****************" << std::endl;
    outfile << "       ||        " << std::endl;
    outfile << "       ||        " << std::endl;
    outfile.close();
    std::cout << "ShrubberyCreationForm : the tree was drawn\n";
}
