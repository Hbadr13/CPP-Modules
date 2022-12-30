/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:20:02 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/08 19:20:04 by hbadr            ###   ########.fr       */
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
    ~Form();
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
            return "this Grade is Too High";
        }
    };

    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw()
        {
            return "this Grade is Too Low";
        }
    };
};

std::ostream &operator<<(std::ostream &outt, Form const &form);

#endif
