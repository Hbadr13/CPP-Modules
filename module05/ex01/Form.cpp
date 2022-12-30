/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:19:48 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/08 19:19:56 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"

Form::Form() : grade_to_execute_(0), grade_to_signed_(0)
{
    sign_ = false;
    std::cout << "Form       : Default constructor called !\n";
}

Form::Form(std::string name, int grade_to_sig, int grade_to_exe) : name_(name), grade_to_execute_(grade_to_exe), grade_to_signed_(grade_to_sig)
{
    std::cout << "Form       : Parameterized constructor called !\n";
    if (grade_to_sig < HIGH_POS_GRADE)
        throw Form::GradeTooHighException();
    else if (grade_to_sig > LOW_POS_GRADE)
        throw Form::GradeTooLowException();
    if (grade_to_exe < HIGH_POS_GRADE)
        throw Form::GradeTooHighException();
    else if (grade_to_exe > LOW_POS_GRADE)
        throw Form::GradeTooLowException();
    this->sign_ = false;
}

Form::Form(Form const &cpy) : grade_to_execute_(cpy.grade_to_execute_), grade_to_signed_(cpy.grade_to_signed_)
{
    *this = cpy;
    std::cout << "Form       : copy constructor.\n";
}

Form &Form::operator=(Form const &cpy)
{
    if (this == &cpy)
        return *this;
    new (this) Form(cpy.name_, cpy.grade_to_signed_, cpy.grade_to_execute_);
    this->sign_ = cpy.sign_;
    return *this;
}

Form::~Form()
{
    std::cout << "Form       : destructor called\n";
}

/////////////// getters
const std::string Form::getName_() const
{
    return this->name_;
}

bool Form::getSign_() const
{
    return this->sign_;
}

int Form::getGradetoexecute_() const
{
    return grade_to_execute_;
}

int Form::getGradtosigned_() const
{
    return grade_to_signed_;
}

void Form::beSigned(Bureaucrat &buro)
{
    if (this->getGradtosigned_() >= buro.getGrade())
    {
        this->sign_ = true;
        std::cout << "Form       : Signed\n";
    }
    else
        throw Form::GradeTooLowException();
}

//------------> operator << <-------------
std::ostream &operator<<(std::ostream &outt, Form const &form)
{
    outt << "Form       : informations for form [name :" << form.getName_() << "]"
         << " [grade required to execute : " << form.getGradetoexecute_() << "]"
         << " [ grade required to sign : " << form.getGradtosigned_() << " ]"
         << " [ if signed : " << form.getSign_() << "]\n";
    return outt;
}
