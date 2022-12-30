/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:22:53 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/08 19:22:54 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include "Form.hpp"
#include <iostream>

#define HIGH_POS_GRADE 1
#define LOW_POS_GRADE 150

class Form;

class Bureaucrat
{
private:
    std::string const name;
    int grade;

public:
    int x;
    Bureaucrat();
    Bureaucrat(std::string const &n, int grd);
    Bureaucrat(Bureaucrat const &cpy);
    ~Bureaucrat();

    const std::string &getName() const;
    int getGrade() const;

    Bureaucrat &operator=(Bureaucrat const &cpy);
    void increment(int n);
    void decrement(int n);
    void signForm(Form const &form);
    void executeForm(Form const &form);

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
    class GradeIsNegative : public std::exception
    {
    public:
        const char *what() const throw()
        {
            return "the grade is negative\n";
        }
    };
    class ItWillBeSignedLater : public std::exception
    {
    public:
        const char *what() const throw()
        {
            return "it will be signed later\n";
        }
    };
};
std::ostream &operator<<(std::ostream &outp, Bureaucrat const &burea);

#endif
