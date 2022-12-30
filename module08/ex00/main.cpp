/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:05:50 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/16 16:05:54 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"

int main()
{
    std::vector<int> vector;
    vector.push_back(1);
    vector.push_back(-1);
    vector.push_back(5);


    std::list<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(0);

    try
    {
        easyfind(vector, 1);
        easyfind(list ,2);

        easyfind(vector, 0);
    }
    catch (const char * &e)
    {
        std::cerr << e << std::endl;
    }
}
