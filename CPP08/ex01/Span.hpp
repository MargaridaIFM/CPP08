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
#include <exception>
#include <ctime>
#include <limits>

class Span
{
    private:
        unsigned int vSize;
        std::vector<int> storage;
   
    public:
        Span(unsigned int n);
        Span(const Span &copy);
        Span &operator=(const Span &copy);
        ~Span();
        
        void addNumber(int nbr);
        int shortestSpan() const;
        int longestSpan() const;

        void addMultipleNumber(size_t add);
        void printNbrs() const;
};

#endif