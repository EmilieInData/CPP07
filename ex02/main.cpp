/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esellier <esellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:16:09 by esellier          #+#    #+#             */
/*   Updated: 2025/05/26 19:56:46 by esellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Common.hpp"
#include "Array.hpp"

int main()
{       
    try
    {
        // Array<std::string> test1; 
        // std::cout << PURPLE << "Test1, string at position 0: "
        //              << GREEN  << test1[0] << "\n" << RESET;
        Array<std::string> test1(3);
        test1[0] = "Hello";
        test1[1] = "world";
        test1[2] =  "!"; 
        std::cout << PURPLE << "Test1, string at position 2: "
                  << GREEN  << test1[2] << "\n" << RESET;

        Array<int> test2(4);
        test2[0] = 42;
        for (unsigned int i = 0; i < test2.size(); i++)
        {
            std::cout << PURPLE << "Test2, int at position " << i << " is: "
                      << GREEN << test2[i] << RESET << "\n";
        }
        
        Array<int> test3 = test2;
        test3[2] = 24;
        for (unsigned int i = 0; i < test3.size(); i++)
        {    
            std::cout << PURPLE << "Test3, int at position " << i << " is: "
                      << GREEN << test3[i] << RESET << "\n";
        }
    }
    catch(const std::range_error& e)
    {
        std::cerr << ERROR << PINK << e.what() << '\n' << RESET;
    }
    catch(const std::bad_alloc& e)
    {
        std::cerr << ERROR << PINK << "Memory allocation failed: " << e.what() << '\n' << RESET;
    }
    return (0);
}
