/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esellier <esellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 16:41:49 by esellier          #+#    #+#             */
/*   Updated: 2025/05/23 16:53:43 by esellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Templates.hpp"
#include "Common.hpp"

int main()
{
    int a = 2;
    int b = 3;

    ::swap( a, b );
    std::cout << PURPLE << "\n" << "a = " << GREEN << a
              << PURPLE << ", b = " << GREEN << b << "\n\n";
    std::cout << PURPLE << "min( a, b ) = " << GREEN <<::min( a, b ) << std::endl;
    std::cout << PURPLE << "max( a, b ) = " << GREEN << ::max( a, b ) << "\n\n";

    std::string c = "chaine1";
    std::string d = "chaine2";
    
    ::swap(c, d);
    std::cout << PURPLE << "c = " << GREEN << c
              << PURPLE << ", d = " << GREEN << d << "\n\n";
    std::cout << PURPLE << "min( c, d ) = " << GREEN << ::min( c, d ) << std::endl;
    std::cout << PURPLE << "max( c, d ) = " << GREEN << ::max( c, d ) << "\n\n";
    
    double e = -42.42;
    double f = 42.41;

    ::swap(e, f);
    std::cout << PURPLE << "e = " << GREEN << e
              << PURPLE << ", f = " << GREEN << f << "\n\n";
    std::cout << PURPLE << "min( e, f ) = " << GREEN << ::min( e, f ) << std::endl;
    std::cout << PURPLE << "max( e, f ) = " << GREEN << ::max( e, f ) << "\n\n";
    
    return 0; 
}
