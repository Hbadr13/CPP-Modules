/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:21:51 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/08 19:21:53 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Intern.hpp"
int main()
{
    try
    {
        Bureaucrat b("Bureaucrat", 30);
        Intern someRandomIntern;

        std::cout << "----------------------------\n"
                  << std::endl;
        Form *rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");
        if (rrf)
        {
            rrf->beSigned(b);
            b.signForm(*rrf);
            b.executeForm(*rrf);
            delete (rrf);
        }
        std::cout << "\n----------------------------\n"
                  << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "---------- leaks -----------" << std::endl;
    system("leaks Forms");
}
