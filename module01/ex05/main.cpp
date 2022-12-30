/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:58:17 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/08 20:58:30 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
int main()
{
    Harl hrl;
    hrl.complain("DEBUG");
    hrl.complain("INFO");
    hrl.complain("WARNING");
    hrl.complain("ERROR");
    hrl.complain("DEBUG");
    hrl.complain("not");
}
