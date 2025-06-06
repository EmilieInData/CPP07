/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esellier <esellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 16:59:16 by esellier          #+#    #+#             */
/*   Updated: 2025/05/26 15:58:27 by esellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_CPP
# define ITER_CPP

template <typename P, typename S, typename F>  
void    iter(P* array, S& size, F& function)
{
    if (!array || size == 0)
    {
        std::cout << ERROR << PINK << "Error, invalid array" << RESET << "\n";
        return;
    }
    for(unsigned long i = 0; i < size; i++)
        function(array[i]);
    return;
}

#endif
