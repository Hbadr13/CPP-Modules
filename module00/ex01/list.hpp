/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:00:28 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/02 20:00:31 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
#define LIST_H
#include <iostream>
#include <string>
# define KRED  	"\x1B[31m"
# define KYELLOW "\x1B[32m"
# define KGREEN   "\x1B[33m"
# define KBLUE  "\x1B[34m"
# define KMAGENTA  "\x1B[35m"
# define KCYAN  "\x1B[36m"
# define KWHITE  "\x1B[37m"
# define KNORMAL  "\x1B[0m"

typedef struct s_contac{
    std::string index_str;
    std::string key_word;
    std::string key1;
    std::string key2;
    std::string key3;
    std::string key4;
    std::string key5;
}t_key;

#endif
