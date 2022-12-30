/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:20:08 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/08 19:20:10 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"
int main()
{

    try
    {
        Bureaucrat burct1("JONE1", 2);
        Form form("Doctor", 20, 55);
        std::cout << "------------------------\n\n";
        std::cout << burct1;
        std::cout << form;
        form.beSigned(burct1);
        burct1.signForm(form);
        std::cout << form;
        std::cout << "\n------------------------\n";
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

       std::cout<<"\n\n---------- leaks -----------"<<std::endl;
       system("leaks Bureaucrat");
}
