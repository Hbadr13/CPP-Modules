/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:06:43 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/16 16:06:44 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
private:

public:
    typedef typename std::deque<T>::iterator iterator;

    MutantStack()
    {

    }
    ~MutantStack()
    {
    }
    MutantStack(MutantStack<T> &cpy)
    {
        *this = cpy;
    }
    MutantStack<T> &operator=(MutantStack<T> &cpy)
    {
        this->c = cpy.c;
        return *this;
    }
    typename std::deque<T>::iterator end()
    {
        return this->c.end();
    }
    typename std::deque<T>::iterator begin()
    {
        return this->c.begin();
    }
};

#endif

