/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:22:57 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/08 19:23:00 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <ostream>

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string name_;
    bool sign_;
    const int grade_to_execute_;
    const int grade_to_signed_;

public:
    Form();
    virtual ~Form();
    Form(std::string name, int grade_to_sig, int grade_to_exe);
    Form(Form const &cpy);
    Form &operator=(Form const &cpy);

    const std::string getName_() const;
    bool getSign_() const;
    int getGradetoexecute_() const;
    int getGradtosigned_() const;
    void beSigned(Bureaucrat &buro);

    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw()
        {
            return "this Grade is Too High\n";
        }
    };
    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw()
        {
            return "this Grade is Too Low\n";
        }
    };
    class FormNotSigned : public std::exception
    {
    public:
        const char *what() const throw()
        {
            return "form not signed\n";
        }
    };
    virtual void execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator<<(std::ostream &outt, Form const &form);

#endif
