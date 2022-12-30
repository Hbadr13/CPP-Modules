/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:57:35 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/08 20:57:38 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
#define MAIN_H
#include<iostream>
#include<string>
#include<fstream>
#define ERR_OPEN 2
#define ERR_ARG  1

std::string replace_str(std::string line, std::string src, std::string dst);
void ft_exit(int status);
#endif
