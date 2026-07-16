/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:15:17 by mfrancis          #+#    #+#             */
/*   Updated: 2025/11/04 17:25:25 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <stdexcept>


/// Finds the first occurrence of toFind in container.
/// Returns an iterator to it, or throws std::runtime_error if not found.
/// T is expected to be a (non-associative) container of integers.
template <typename T>
typename T::iterator easyfind(T &container , int toFind);

#include "easyfind.tpp"

#endif