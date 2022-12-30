/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:41:10 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/15 17:41:12 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "array.hpp"

int main(int, char **)
{
    Array<int> numbers(10);
    int *mirror = new int[10];

    for (int i = 0; i < 10; i++)
    {
        numbers[i] = i;
        mirror[i] = i;
    }
    // SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < 10; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[10] = 0;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < 10; i++)
    {
        numbers[i] = i;
    }
    for (int i = 0; i < 10; i++)
    {
        std::cout << numbers[i] << std::endl;
    }
    delete[] mirror; //
    return 0;
}
