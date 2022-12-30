/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:19:22 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/08 19:19:23 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat burct1("JONE1", 149);
        // Bureaucrat burct2("JONE2", -15);
        // Bureaucrat burct3("JONE3", 160);
        std::cout << burct1;
        burct1.decrement(2);
        std::cout << burct1;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "\n\n---------- leaks -----------" << std::endl;
    system("leaks Bureaucrat");
}
