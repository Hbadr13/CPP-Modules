/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:34:36 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/13 12:34:37 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:31:39 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/13 12:31:40 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converting.hpp"
bool my_isDouble(std::string str)
{
    int tot = 0;
    int i = 0;
    while (str[i])
    {
        if ((str[i] == '+' || str[i] == '-') && str[i + 1] != '\0' && i == 0)
            ;
        else if (str[i] == '.')
        {
            tot++;
            if (tot == 2)
                return false;
        }
        else if (isdigit(str[i]) == 0)
            return false;
        i++;
    }
    return true;
}

bool my_isFloat(std::string str)
{
    int tot = 0;
    int i = 0;
    while (str[i])
    {
        if ((str[i] == '+' || str[i] == '-') && str[i + 1] != '\0' && str[i + 1] != 'f' && i == 0)
            ;
        else if (str[i] == 'f' && str[i + 1] == '\0' && tot == 1)
            ;
        else if (str[i] == '.')
        {
            tot++;
            if (tot == 2)
                return false;
        }
        else if (isdigit(str[i]) == 0)
            return false;
        i++;
    }
    return true;
}

bool my_isNumber(std::string str)
{
    int i = 0;
    while (str[i])
    {
        if ((str[i] == '+' || str[i] == '-') && str[i + 1] != '\0' && i == 0)
            ;
        else if (isdigit(str[i]) == 0)
            return false;
        i++;
    }
    return true;
}

int type_of_argument(std::string str)
{
    if (str[0] == '.' && str[1] != '\0') // if arg =.5f
        return 0;
    if ((isprint(str[0]) && !isdigit(str[0])) && str[1] == '\0')
        return CHAR;
    if (my_isNumber(str))
        return INT;
    if (my_isDouble(str))
        return DOUBLE;
    if (my_isFloat(str))
        return FLOAT;
    return 0;
}

int main(int ac, char **av)
{
    char c;
    int type;

    if (ac != 2 || av[1][0] == '\0')
    {
        std::cout << "error: number of arguments\n";
        return 1;
    }
    type = type_of_argument(av[1]);
    if (type == INT || type == FLOAT || type == DOUBLE)
        Convert_type_int_dobl_flt(av[1]);
    else if (type == CHAR)
    {
        c = av[1][0];
        std::cout << std::fixed;
        std::cout << "char :" << static_cast<char>(c) << std::endl;
        std::cout << "int :" << static_cast<int>(c) << std::endl;
        std::cout << "float :" << std::setprecision(1) << static_cast<float>(c) << std::endl;
        std::cout << "double :" << std::setprecision(1) << static_cast<double>(c) << "f" << std::endl;
    }
    else if ((std::strcmp(av[1], "+inf") == 0) || (std::strcmp(av[1], "-inf") == 0) || (std::strcmp(av[1], "nan") == 0) || (std::strcmp(av[1], "+inff") == 0) || (std::strcmp(av[1], "-inff") == 0) || (std::strcmp(av[1], "nanf") == 0))
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int : impossible" << std::endl;
        std::cout << "float : " << av[1] << std::endl;
        std::cout << "double : " << av[1] << std::endl;
    }
    else
        std::cout << "hadchii fih chi mochkil  (^^) : " << av[1] << std::endl;
}
