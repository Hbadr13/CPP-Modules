/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:05:45 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/16 16:05:47 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:05:43 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/16 16:05:44 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EASYFIND_HPP 
#define EASYFIND_HPP 

#include <iostream>
#include <stack>
#include <vector>
#include <deque>
#include <array>
#include <list>

template <typename T>
void easyfind(T data, int numb)
{ 
    typename T::iterator it = data.begin();
    typename T::iterator ite = data.end();

    while (it != ite)
    {
        if (*it == numb)
        {
            std::cout << "The Number Was Found." << std::endl;
            return;
        }
        it++;
    }
    throw "The Number Was Not Found.";
}

#endif
