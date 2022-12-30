/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:57:25 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/08 20:57:27 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(int argc, char **argv)
{
    if (argc != 4 || !argv[2][0])
        ft_exit(ERR_ARG);

    std::string line;
    std::string file_repl(argv[1]);
    std::ifstream myfile(argv[1]);
    if (myfile.is_open() == 0)
        ft_exit(2);
    std::ofstream my_file_replace(file_repl.append(".replace"));
    while(std::getline(myfile, line))
    {
        my_file_replace << replace_str(line, argv[2], argv[3]);
        my_file_replace << "\n";
    }
    my_file_replace.close();
    myfile.close();
    return 0;
}

