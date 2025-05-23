/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esellier <esellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 17:58:30 by esellier          #+#    #+#             */
/*   Updated: 2025/05/23 18:34:34 by esellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Common.hpp"
#include "iter.hpp"

void    changeO(std::string& value)
{
    for(unsigned long i = 0; i < value.length(); i++)
    {
        if (value[i] == 'o')
            value[i] = 'a';
    }
    return ;
}

void    modulo(int& a)
{
    //mettre un message d'erreur si pas de a
    a = a % 6;
    return;
}

int main()
{
    std::string     array[] = {"Hello", "World", "!"};
    unsigned long   length = sizeof(array) / sizeof(array[0]);
    
    std::cout << std::endl;
    for (unsigned long i = 0; i < length; i++)
        std::cout << PURPLE << array[i] << std::endl; 
    
    ::iter(array, length, changeO);
    
    for (unsigned long i = 0; i < length; i++)
        std::cout << BLUE << array[i] << std::endl;
    std::cout << std::endl;

    int             arrai[] = {0, 21, 12, 87, -42};
    unsigned long   lengthi = sizeof(arrai) / sizeof(arrai[0]);

    for (unsigned long i = 0; i < lengthi; i++)
        std::cout << PURPLE << arrai[i] << std::endl; 
    
    ::iter(arrai, lengthi, modulo);
    
    for (unsigned long i = 0; i < lengthi; i++)
        std::cout << BLUE << arrai[i] << std::endl;
    std::cout << std::endl;
    
    return (0);    
}
