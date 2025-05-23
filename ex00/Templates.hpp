/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esellier <esellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 16:32:41 by esellier          #+#    #+#             */
/*   Updated: 2025/05/23 16:41:08 by esellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

template <typename T>
void    swap(T& a, T& b)
{
    T   c;
    
    c = a;
    a = b;
    b = c;
    return;
}

template <typename T>
const T&    min(const T& a, const T& b)
{
    if (a < b)
        return (a);
    return (b);
}

template <typename T>
const T&    max(const T& a, const T& b)
{
    if (a > b)
        return (a);
    return (b);
}

#endif
