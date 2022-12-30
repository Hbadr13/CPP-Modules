/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:23:28 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/08 19:23:31 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM
#define ROBOTOMYREQUESTFORM

#include "fstream"
#include "Form.hpp"

class RobotomyRequestForm  : public Form
{
private:
    std::string target;

public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const &cpy);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &cpy);
    ~RobotomyRequestForm();
    virtual void execute(Bureaucrat const & executor) const;
};

#endif

