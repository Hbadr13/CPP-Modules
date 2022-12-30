/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:40:07 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/15 17:40:12 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WHATEVER
#define WHATEVER

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
    T c = a;
    a = b;
    b = c;
}

template <typename T>
T min(T &a, T &b) 
{
    if (a < b)
        return a;
    return b;
}

template <typename T>
T max(T &a, T &b)
{
    if (a > b)
        return a;
    return b;
}

#endif
