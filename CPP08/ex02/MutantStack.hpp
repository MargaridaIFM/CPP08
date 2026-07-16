/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:51:09 by mfrancis          #+#    #+#             */
/*   Updated: 2026/07/16 18:05:01 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
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
        /// Same, walking the stack from the top element down to the bottom one.
        typedef typename std::deque<T>::reverse_iterator reverse_iterator;

        /// Iterator to the bottom element of the stack (oldest pushed element).
        iterator begin();
        /// Iterator past the top element of the stack.
        iterator end();

        /// Reverse iterator to the top element of the stack.
        reverse_iterator rbegin();
        /// Reverse iterator past the bottom element of the stack.
        reverse_iterator rend();
};

#include  "MutantStack.tpp" 

#endif

//deque: Double Ended Queue
// std::stack internamente usa um container (por padrão std::deque<T>)
