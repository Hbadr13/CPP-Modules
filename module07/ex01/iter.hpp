/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:40:36 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/15 17:40:40 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

# define KGREEN   "\x1B[33m"
# define KNORMAL  "\x1B[0m"

template <typename elm>
elm aplic(elm c)
{
    std::cout<< c;
    return c;
}

template <typename TM>
void iter(TM *arry, size_t light, TM(func)(TM c))
{
    size_t i = 0;
    while (i < light)
    {
        func(arry[i]);
        std::cout << std::endl;
        i++;
    }
}

#endif
