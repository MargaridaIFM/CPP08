/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:19:14 by mfrancis          #+#    #+#             */
/*   Updated: 2026/06/26 00:00:00 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
    // Subject example: addNumber() one by one, then check shortest/longest span.
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "Print:" << std::endl;
        sp.printNbrs();
        std::cout << "ShortestSpan: " << sp.shortestSpan() << std::endl;
        std::cout << "LongestSpan: " << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // A default-built Span has no capacity, so it only becomes usable
    // once another Span is assigned to it.
    try
    {
        Span empty;
        std::cout << "\nDefault Span:" << std::endl;
        empty.addNumber(1);
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // Filling a Span from a range of iterators in a single call.
    try
    {
        std::vector<int> values;
        values.push_back(1);
        values.push_back(42);
        values.push_back(7);

        Span rangeSpan(10);
        rangeSpan.addRange(values.begin(), values.end());
        std::cout << "\nPrint after addRange:" << std::endl;
        rangeSpan.printNbrs();
        std::cout << "ShortestSpan: " << rangeSpan.shortestSpan() << std::endl;
        std::cout << "LongestSpan: " << rangeSpan.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // addRange() should throw rather than overflow the Span's capacity.
    try
    {
        std::vector<int> tooMany(5, 1);
        Span tinySpan(3);
        tinySpan.addRange(tooMany.begin(), tooMany.end());
    }
    catch (std::exception &e)
    {
        std::cout << "\nExpected overflow error: " << e.what() << std::endl;
    }

    // Stress test required by the subject: at least 10 000 numbers.
    try
    {
        const unsigned int amount = 10000;
        std::srand(static_cast<unsigned int>(std::time(NULL)));

        std::vector<int> bigInput;
        for (unsigned int i = 0; i < amount; ++i)
            bigInput.push_back(std::rand());

        Span bigSpan(amount);
        bigSpan.addRange(bigInput.begin(), bigInput.end());
        std::cout << "\nStress test with " << amount << " numbers:" << std::endl;
        std::cout << "ShortestSpan: " << bigSpan.shortestSpan() << std::endl;
        std::cout << "LongestSpan: " << bigSpan.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}
