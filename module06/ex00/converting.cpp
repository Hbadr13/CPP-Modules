/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converting.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:31:28 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/13 12:31:29 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "converting.hpp"

void to_Char(const char *str)
{
    if (isprint(std::atoi(str)))
        std::cout << "char: " << static_cast<char>(std::atoi(str)) << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
}

void to_Int(const char *str)
{
    std::cout << "int: " << static_cast<int>(std::atoi(str)) << std::endl;
}

void to_double(const char *str)
{
    std::string st = str;
    size_t size;
    if (st.find(".") == st.npos || str[st.length() - 1] == '.')
        size = 1;
    else
        size = st.length() - (st.find(".") + 1);
    if (str[st.length() - 1] == 'f' && str[st.length() - 2] != '.')
        size--;
    std::cout << "double: " << std::setprecision(size) << std::stod(str) << std::endl;
}

void to_Float(const char *str)
{
    std::string st = str;
    size_t size;
    if (st.find(".") == st.npos || str[st.length() - 1] == '.')
        size = 1;
    else
        size = st.length() - (st.find(".") + 1);
    if (str[st.length() - 1] == 'f' && str[st.length() - 2] != '.')
        size--;
    std::cout << "float: " << std::setprecision(size) << std::stod(str) << "f" << std::endl;
}


void Convert_type_int_dobl_flt(const char *str)
{
    std::cout << std::fixed;
    to_Char(str);
    to_Int(str);
    to_Float(str);
    to_double(str);
}
