/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:51:09 by mfrancis          #+#    #+#             */
/*   Updated: 2025/11/11 16:44:52 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>
#include <list>
#include <stack>

template <typename T>
class  MutantStack: public std::stack <T>
{
    public:
        /// Default constructor: starts as an empty stack.
        MutantStack();
        /// Copy constructor: duplicates every element of copy.
        MutantStack(const MutantStack &copy);
        /// Copy assignment: replaces this stack's elements with copy's.
        MutantStack &operator=(const MutantStack &copy);
        /// Destructor.
        ~MutantStack();

        /// Iterator type exposed on top of std::stack's underlying container.
        typedef typename std::deque<T>::iterator iterator;

        /// Iterator to the bottom element of the stack (oldest pushed element).
        iterator begin();
        /// Iterator past the top element of the stack.
        iterator end();
};

#include  "MutantStack.tpp" 

#endif

//deque: Double Ended Queue
// std::stack internamente usa um container (por padrão std::deque<T>)
