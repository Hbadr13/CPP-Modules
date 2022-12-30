/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:34:57 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/13 12:35:00 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

int main()
{
    Data *ptr1 = new Data;
    
    ptr1->name = "badr";
    ptr1->number = 4;
    ptr1->doubl = 99.33;
    std::cout << "number : " << ptr1->number << std::endl;
    std::cout << "name   : " << ptr1->name << std::endl;
    std::cout << "double : " << ptr1->doubl << std::endl;

    uintptr_t tom;
    tom = serialize(ptr1);

    std::cout << "\n\n";
    std::cout << "tom        : " << tom << std::endl;
    std::cout << "adress tom : " << &tom << std::endl;
    std::cout << "\n\n";

    Data *ptr2;
    ptr2 = deserialize(tom);
    std::cout << "number : " << ptr2->number << std::endl;
    std::cout << "name   : " << ptr2->name << std::endl;
    std::cout << "double : " << ptr2->doubl << std::endl;
    delete (ptr1);
    std::cout << "\n------------- leaks -------------\n";
    system("leaks data");
}

// void *serialize(Data *ptr)
// {
//     return reinterpret_cast<void *>(ptr);
// }

// Data *deserialize(void *raw)
// {
//     return reinterpret_cast<Data *>(raw);
// }

// int main()
// {
//     Data *ptr1 = new Data;
//     ptr1->name = "badr";
//     ptr1->number = 4;
//     ptr1->doubl = 99.33;
//     std::cout << "number : " << ptr1->number << std::endl;
//     std::cout << "name   : " << ptr1->name << std::endl;
//     std::cout << "double : " << ptr1->doubl << std::endl;

//     void *tom;
//     tom  = serialize(ptr1);
//     std::cout << "adress tom : " << tom<< std::endl;

//     Data *ptr2;
//     ptr2 = deserialize(tom);
//     std::cout << "number : " << ptr2->number << std::endl;
//     std::cout << "name   : " << ptr2->name << std::endl;
//     std::cout << "double : " << ptr2->doubl << std::endl;
//     delete(ptr1);
//     system("leaks data");
// }

