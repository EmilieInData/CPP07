/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esellier <esellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 16:59:16 by esellier          #+#    #+#             */
/*   Updated: 2025/05/23 18:36:31 by esellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_CPP
# define ITER_CPP

template <typename P, typename S, typename F>  
void    iter(P* array, S size, F function)
{
    //proteger ici des 3 variables si elles sont nulles ou vides + ds le main ?
    for(unsigned long i = 0; i < size; i++)
        function(array[i]);
    return;
}

#endif
