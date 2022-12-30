/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:20:18 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/08 19:20:20 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "include/ShrubberyCreationForm.hpp"
#include "include/RobotomyRequestForm.hpp"
#include "include/PresidentialPardonForm.hpp"

int main()
{

    try
    {
        ShrubberyCreationForm shrub("jone");
        // RobotomyRequestForm shrub("jone");
        // PresidentialPardonForm shrub("jone");
        Bureaucrat bur1("docter", 5);
        std::cout << "--------------------------\n\n";
        shrub.beSigned(bur1);
        bur1.executeForm(shrub);
        std::cout << "\n--------------------------\n";
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n\n---------- leaks -----------" << std::endl;
    system("leaks Forms");
}
