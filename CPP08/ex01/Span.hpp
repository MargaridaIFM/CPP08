/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:29:39 by mfrancis          #+#    #+#             */
/*   Updated: 2025/11/06 17:19:25 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <vector>
#include <stdexcept>
#include <limits>

class Span
{
    private:
        unsigned int vSize;
        std::vector<int> storage;

    public:
        /// Default constructor: builds a Span with no capacity at all.
        Span();
        /// Builds a Span able to hold at most n integers.
        Span(unsigned int n);
        /// Copy constructor: duplicates the capacity and stored numbers.
        Span(const Span &copy);
        /// Copy assignment: replaces capacity and stored numbers.
        Span &operator=(const Span &copy);
        /// Destructor.
        ~Span();

        /// Adds a single number to the Span. Throws if the Span is already full.
        void addNumber(int nbr);
        /// Returns the smallest distance between any two stored numbers. Throws if fewer than 2 numbers are stored.
        int shortestSpan() const;
        /// Returns the largest distance between any two stored numbers. Throws if fewer than 2 numbers are stored.
        int longestSpan() const;

        /// Adds every number in [first, last) to the Span in a single call. Throws if it would exceed the capacity.
        template <typename InputIterator>
        void addRange(InputIterator first, InputIterator last);

        /// Prints every stored number, one per line.
        void printNbrs() const;
};

#include "Span.tpp"

#endif