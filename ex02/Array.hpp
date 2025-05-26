/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esellier <esellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:14:43 by esellier          #+#    #+#             */
/*   Updated: 2025/05/26 18:13:12 by esellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array
{
    public:
        Array();
        ~Array();
        Array(unsigned int n);
        Array(Array const& other);

        unsigned int    size() const;
        T&              operator[](unsigned int index);
        Array<T>&       operator=(Array const& other);
    
    private:
        T*              _array;
        unsigned int    _size;
};

#include "Array.tpp"

#endif
