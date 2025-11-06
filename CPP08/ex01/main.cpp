/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:19:14 by mfrancis          #+#    #+#             */
/*   Updated: 2025/11/06 17:42:27 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    {
        Span sp = Span(20);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "Print:" << std::endl;
        sp.printNbrs();
        std::cout << "ShortestSpan: " <<sp.shortestSpan() << std::endl;
        std::cout << "LongestSpan: " << sp.longestSpan() << std::endl;
        std::cout << "Adding more elements: " << std::endl;
        sp.addMultipleNumber(10);
        std::cout << "Print:" << std::endl;
        sp.printNbrs();
        std::cout << "Adding more elements: " << std::endl;
        sp.addMultipleNumber(10);
    }
    catch (std::exception &e)
    {
         std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}