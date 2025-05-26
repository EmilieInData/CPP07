/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esellier <esellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:24:12 by esellier          #+#    #+#             */
/*   Updated: 2025/05/26 19:49:42 by esellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Common.hpp"
#include "Array.hpp"

template<typename T>
Array<T>::Array()
{
    std::cout << BLUE << ">> Array constructor called\n" << RESET;
    _array = NULL;
    _size = 0;
}

template<typename T>
Array<T>::~Array()
{
    std::cout << BLUE << ">> Array destructor called\n" << RESET;
    if (_array)
        delete[] _array;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
    std::cout << BLUE << ">> Array value constructor called\n" << RESET;
    _array = new T[n]();
    _size = n;
}

template<typename T>
Array<T>::Array(Array const& other)
{
    std::cout << BLUE << ">> Array copy constructor called\n" << RESET;
    *this = other;
    return;
}

template<typename T>
unsigned int    Array<T>::size() const
{
    return _size;
}

template<typename T>
T&  Array<T>::operator[](unsigned int index)
{
    if (index >= size())
        throw std::range_error("Index incorrect, out of bounds");
    return _array[index];
}

template<typename T>
Array<T>& Array<T>::operator=(Array<T> const& other)
{
	if (this != &other)
	{
        this->_size = other._size;
        if (_size > 0)
        {
            _array = new T[_size];
            for(unsigned int i = 0; i < _size; i++)
                this->_array[i] = other._array[i];
        }
        else
            _array = NULL;
    } 
	else
		std::cout << BLUE << "pay attention, you're trying to assign a class to itself"
				  << RESET << std::endl;
	return (*this);
}

#endif
