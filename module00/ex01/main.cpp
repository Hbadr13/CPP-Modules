/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:00:35 by hbadr             #+#    #+#             */
/*   Updated: 2022/11/02 20:00:37 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "list.hpp"
void ft_exit()
{
    std::cout << "\nexit\n";
    exit(1);
}

int storing_information(t_key *info)
{
    std::cout << KYELLOW << "creat new contact" << KNORMAL << std::endl;
    std::cout << "--> First name     : ";
    getline(std::cin, info->key1);
    if (std::cin.eof())
        ft_exit();
    std::cout << "--> Lastname       : ";
    getline(std::cin, info->key2);
    if (std::cin.eof())
        ft_exit();
    std::cout << "--> Nickname       : ";
    getline(std::cin, info->key3);
    if (std::cin.eof())
        ft_exit();
    std::cout << "--> Darkest_secret : ";
    getline(std::cin, info->key4);
    if (std::cin.eof())
        ft_exit();
    do
    {
        std::cout << "--> Phone number   : ";
        getline(std::cin, info->key5);
        if (std::cin.eof())
            ft_exit();
    } while (info->key5.length() > 12 || ft_isNumber(info->key5) == 0);
    if (info->key1.empty() == 1 || info->key2.empty() == 1 || info->key3.empty() == 1 || info->key4.empty() == 1 || info->key5.empty() == 1)
    {
        std::cout << KRED << "Failure ..." << KNORMAL << std::endl;
        return -1;
    }
    return 0;
}
int main()
{
    PhoneBook PHON;
    t_key info;
    int index_search;
    int index;
    int prt;
    prt = 0;
    index = 0;
    std::cout << "\nPermitted Commands : \"EXIT\" or \"ADD\" or \"SEARCH\"\n\n";
    while (true)
    {
        index_search = -1;
        std::cout << "PhoneBook : ";
        getline(std::cin, info.key_word);
        if (std::cin.eof())
            ft_exit();
        if (info.key_word.compare("EXIT") == 0)
            ft_exit();
        else if (info.key_word.compare("ADD") == 0)
        {
            if (-1 == storing_information(&info))
                continue;
            std::cout << KGREEN << "success ..." << KNORMAL << std::endl;
            PHON.add(index, info);
            index++;
            if (index == 8)
                index = 0;
            prt = 1;
        }
        else if (info.key_word.compare("SEARCH") == 0)
        {
            PHON.display_all_contact();
            if (prt == 0)
            {
                std::cout << KRED << "No Contacts Found" << KNORMAL << std::endl;
                continue;
            }
            do
            {
                std::cout << "Please Enter Index : ";
                getline(std::cin, info.index_str);
                if (std::cin.eof())
                    ft_exit();
                if (info.index_str.empty() || info.index_str.length() > 2)
                    continue;
                if (ft_isNumber(info.index_str) == 0)
                    continue;
                else
                    index_search = std::stoi(info.index_str);
            } while (index_search > 7 || index_search < 0);
            PHON.display_contact(index_search);
        }
        else if (!info.key_word.empty())
            std::cout << "\nPermitted Commands : EXIT or ADD or SEARCH\n\n";
    }
    return 0;
}
