/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:35:11 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/13 12:35:12 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <string>

class Base
{
public:
    Base(){
        
    }
    virtual ~Base()
    {
    }
    virtual void print()
    {
        std::cout << "I am A\n";
    }
};

class A : public Base
{
public:
    A() {}
    ~A() {}
    void print()
    {
        std::cout << "I am A\n";
    }
};

class B : public Base
{
public:
    B() {}
    ~B() {}
    void print()
    {
        std::cout << "I am B\n";
    }
};

class C : public Base
{
public:
    C() {}
    ~C() {}
    void print()
    {
        std::cout << "I am C\n";
    }
};

#endif
