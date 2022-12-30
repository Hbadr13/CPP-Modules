/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:59:03 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/02 19:59:06 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
    int i;
    int j;
    if (ac > 1)
    {
        i = 1;
        while (av[i])
        {
            j = 0;
            while (av[i][j])
            {
                if (islower(av[i][j]))
                    std::cout << (char)(av[i][j] - 32);
                else
                    std::cout << (char)(av[i][j]);
                j++;
            }
            i++;
        }
    }
    else
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout<<std::endl;
}
