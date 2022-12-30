/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:06:47 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/16 16:06:51 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);

    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    ////  ----------------------/////
    std::cout << "\nMy test" << std::endl;

    // std::stack<char, std::deque<char > > mystack;
    MutantStack<char> my;
    my.push('a');
    my.push('A');
    my.push('1');

    MutantStack<char> mystack;
    mystack = my;
    while (!mystack.empty())
    {
        std::cout << mystack.top() << std::endl;
        mystack.pop();
    }

    return 0;
}
