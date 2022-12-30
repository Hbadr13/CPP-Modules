/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:06:12 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/16 16:06:16 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

//-------- constructor --------\\.

Span::Span() : N_(0)
{
}

Span::Span(int n)
{
    if (n <= 0)
        throw("Number is Negative");
    this->N_ = n;
}

Span::Span(const Span &cpy)
{
    *this = cpy;
}

//--------- operator --------\\.

Span &Span::operator=(const Span &cpy)
{
    this->N_ = cpy.N_;
    return *this;
}

int Span::operator[](unsigned int index) const
{
    if (index < 0 || index >= this->array_.size())
        throw("Out of Range");
    return this->array_[index];
}

//-------- destructor ----------\\.
Span::~Span()
{
}
//-------- set & get ----------\\.

unsigned int Span::getN()
{
    return this->N_;
}

void Span::setN(unsigned int n)
{
    this->N_ = n;
}

//-------- set & get ----------\\.

void Span::addNumber(int number)
{
    if (array_.size() == this->N_)
        throw("Span Is Full");
    this->array_.push_back(number);
}

int Span::longestSpan()
{
    std::vector<int>::iterator it;
    int max;
    int min;

    if (this->array_.size() < 2)
        throw "Problem In Size Of Span";
    it = this->array_.begin();
    max = *it;
    min = *it;
    while (it != this->array_.end())
    {
        if (*it > max)
            max = *it;
        if (*it < min)
            min = *it;
        it++;
    }
    return max - min;
}

int Span::shortestSpan()
{
    std::vector<int>::iterator it1, it2;
    int dst;

    if (this->array_.size() < 2)
        throw "Problem In Size Of Span";
    it1 = this->array_.begin();
    dst = std::abs(*it1 - *(it1 + 1));
    while (it1 != this->array_.end())
    {
        it2 = it1;
        it2++;
        while (it2 != this->array_.end())
        {
            if (std::abs(*it1 - *it2) < dst)
                dst = abs(*it1 - *it2);
            it2++;
        }
        it1++;
    }
    return dst;
}
