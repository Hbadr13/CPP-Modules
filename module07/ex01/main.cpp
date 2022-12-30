/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:40:48 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/15 17:40:51 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "iter.hpp"

int main()
{
  char *arry = (char *)"hello";
  std::cout << KGREEN << "arry of char (^^)" << KNORMAL << std::endl;
  iter(arry, strlen(arry), aplic);

  int tab[] = {4, 2, 5, 0};
  std::cout << KGREEN << "arry of integer (^^)" << KNORMAL << std::endl;
  iter(tab, sizeof(tab) / sizeof(int), aplic);

  std::string str[] = {"zoz", "flog", "waw", "hii"};
  std::cout << KGREEN << "arry of string (^^)" << KNORMAL << std::endl;
  iter(str, sizeof(str) / sizeof(std::string), aplic);
}
