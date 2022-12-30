/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:06:21 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/16 16:06:22 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SAPN_HPP
#define SAPN_HPP

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <iostream>
#include <exception>

class Span
{
private:
    unsigned int N_;
    std::vector<int> array_;

public:
    Span();
    Span(int n);
    Span(const Span &cpy);
    Span &operator=(const Span &cpy);
    int operator[](unsigned int index) const;
    ~Span();

    void addNumber(int number);
    int longestSpan();
    int shortestSpan();
    unsigned int getN();
    void setN(unsigned int n);
};
#endif
