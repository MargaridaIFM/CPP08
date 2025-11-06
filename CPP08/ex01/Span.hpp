/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:29:39 by mfrancis          #+#    #+#             */
/*   Updated: 2025/11/06 10:45:21 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <vector>
#include <exception>

class Span
{
    private:
        std::vector<int> storage;
        unsigned int vSize;
   
    public:
    Span(unsigned int n);
    Span(const Span &copy);
    Span &operator=(const Span &copy);
    ~Span();
    
    void addNumber(int nbr);
    int shortestSpan() const;
    int longestSpan() const;

    void addMultipleNumber(std::vector<int> storage);
    void printNbrs() const;
};

#endif