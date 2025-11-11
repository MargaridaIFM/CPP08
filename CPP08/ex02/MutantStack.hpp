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
        MutantStack();
        MutantStack(const MutantStack &copy);
        MutantStack &operator=(const MutantStack &copy);
        ~MutantStack();

        typedef typename std::deque<T>::iterator iterator;

        iterator begin();
	    iterator end();
};

#include  "MutantStack.tpp" 

#endif

//deque: Double Ended Queue
// std::stack internamente usa um container (por padrão std::deque<T>)
