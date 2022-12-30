/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:57:21 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/08 20:57:22 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
void ft_exit(int status)
{
    if (status == 1)
    {
        std::cout << "Error : number of argument\n";
        exit(1);
    }
    if (status == 2)
    {
        std::cout << "Error : opening file\n";
        exit(1);
    }
}

std::string replace_str(std::string line, std::string src, std::string dst)
{

    int i = 0;
    std::string str;
    
    while (line[i])
    {
        if(line.compare(i, src.size(), src) == 0)
        {
            str.append(dst);
            i = i + src.size();
        }
        else
        {
            str.append(line, i, 1);
            i++;
        }
    }
    return str;
}
