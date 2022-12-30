/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:35:15 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/13 12:35:18 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Base.hpp"

Base *generate(void)
{
    time_t tm = time(0) % 3;

    switch (tm)
    {
    case 0:
        return new A();
    case 1:
        return new B();
    case 2:
        return new C();
    }
    return nullptr;
}

void identify(Base *p)
{
    A *a = dynamic_cast<A *>(p);
    B *b = dynamic_cast<B *>(p);
    C *c = dynamic_cast<C *>(p);
    if (a)
        a->print();
    else if (b)
        b->print();
    else if (c)
        c->print();
    else
        std::cout << "base == nullptr\n";
}

void identify(Base &p1)
{
    try
    {
        A &a = dynamic_cast<A &>(p1);
        a.print();
    }
    catch (...)
    {
    }
    try
    {
        B &b = dynamic_cast<B &>(p1);
        b.print();
    }
    catch (...)
    {
    }
    try
    {
        C &c = dynamic_cast<C &>(p1);
        c.print();
    }
    catch (...)
    {
    }
}

int main()
{
    Base *base = generate();
    if(!base)
        exit(1);
    identify(base);
    identify(*base);
    std::cout<<"\n---------- leaks ----------\n\n";
    system("leaks Base");
}
