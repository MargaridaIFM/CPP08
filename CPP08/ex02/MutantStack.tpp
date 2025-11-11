/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:51:05 by mfrancis          #+#    #+#             */
/*   Updated: 2025/11/10 17:30:08 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack()
{
    std::cout << "Mutant Stack Default Constructer" << std::endl;
}

template <typename T> 
MutantStack<T>::MutantStack(const MutantStack &copy): std::stack<T>(copy)
{
    std::cout << "Mutant Stack Copy Constructer" << std::endl;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &copy)
{
    if(this != &copy)
        std::stack<T>::operator=(copy);
    return(*this);
}

template <typename T>
MutantStack<T>::~MutantStack()
{
    std::cout <<  "Mutant Stack Destructer" << std::endl;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return(this->c.begin());
}
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return(this->c.end());
}