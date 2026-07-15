/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:34:38 by mfrancis          #+#    #+#             */
/*   Updated: 2026/02/18 10:42:00 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Stores the maximum number of elements n; storage starts empty.
Span::Span(unsigned int n):vSize(n)
{
    std::cout << "Construter Called" << std::endl;
}

// Deep-copies the capacity and the numbers already stored in copy.
Span::Span(const Span &copy): vSize(copy.vSize), storage(copy.storage)
{
    std::cout << "Copy Construter Called" << std::endl;
}

// Replaces this Span's capacity and numbers with copy's.
Span &Span::operator=(const Span &copy)
{
    if(this != &copy)
    {
        vSize = copy.vSize;
        storage = copy.storage;
    }
    std::cout << "Copy Assigment Construter Called" << std::endl;
    return(*this);
}

Span::~Span()
{
    std::cout << "Destruter Called" << std::endl;
}

// Appends nbr if there is still room, otherwise signals the Span is full.
void Span::addNumber(int nbr)
{
    if(storage.size() >= vSize)
        throw std::runtime_error("Span is full!");
    storage.push_back(nbr);
}

// Sorts a copy of the stored numbers and looks for the smallest gap
// between two consecutive values, which is the shortest possible span.
int Span::shortestSpan() const
{
    if (storage.size() <= 1)
        throw std::runtime_error("Not enougth elements!");

    std::vector<int> copy = storage;
    std::sort(copy.begin(), copy.end());

    long long small = std::numeric_limits<long long>::max();
    for (size_t i = 0; i + 1 < copy.size(); ++i)
    {
        long long diff = static_cast<long long>(copy[i + 1]) - copy[i]; // >= 0 (sorted)
        if (diff < small)
            small = diff;
    }
    return static_cast<int>(small);
}

// Finds the smallest and largest stored values and returns their difference.
int Span::longestSpan() const
{
    if(storage.size() <= 1)
        throw std::runtime_error("Not enougth elements!");

    int minNbr = *std::min_element(storage.begin(), storage.end());
    int maxNbr = *std::max_element(storage.begin(), storage.end());

    return(maxNbr - minNbr);
}

// Prints every stored number, one per line.
void Span::printNbrs() const
{
    for(size_t i = 0; i < storage.size(); i++)
    {
        std::cout << storage[i] << std::endl;
    }
}