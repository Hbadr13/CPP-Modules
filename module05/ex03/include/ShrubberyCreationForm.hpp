/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:23:35 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/08 19:23:36 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM
#define SHRUBBERYCREATIONFORM
#include "fstream"
#include "Form.hpp"
class ShrubberyCreationForm  : public Form
{
private:
    std::string target;

public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const &cpy);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &cpy);
    ~ShrubberyCreationForm();
    virtual void execute(Bureaucrat const & executor) const;
};

#endif
