/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbadr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:41:03 by hbadr             #+#    #+#             */
/*   Updated: 2022/12/15 17:41:07 by hbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

#define MAX_VAL 750

template <typename Tmp>
class Array
{
private:
    Tmp *array;
    std::size_t size;

public:
    Array()
    {
        this->size = -1;
        array = nullptr;
    }

    Array(unsigned int len)
    {
        this->size = len;
        this->array = new Tmp[len];
    }

    Array &operator=(Array const &cpy)
    {
        this->size = cpy.size;
        if (this != &cpy)
        {
            size_t i = 0;
            this->~Array();
            this->array = new Tmp[cpy.size];
            while (i < cpy.size)
            {
                this->array[i] = cpy[i];
                i++;
            }
        }
        return *this;
    }

    Array(Array const &cpy)
    {
        this->array = nullptr;
        *this = cpy;
    }

    Tmp &operator[](size_t i) const
    {
        if (i < 0 || i >= this->size)
            throw IndexIsOutOfBounds();
        return array[i];
    }

    ~Array()
    {
        if (this->array)
            delete[] this->array;
    }
    
    class IndexIsOutOfBounds : public std::exception
    {
    public:
        char *what() const throw()
        {
            return (char *)"Index is out of bounds";
        }
    };
};

#endif
