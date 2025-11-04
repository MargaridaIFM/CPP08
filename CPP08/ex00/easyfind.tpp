/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:15:08 by mfrancis          #+#    #+#             */
/*   Updated: 2025/11/04 17:26:32 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
typename T::iterator easyfind(T &container , int toFind)
{
    typename T::iterator it = std::find(container.begin(), container.end(), toFind);
    if(it == container.end())
        throw std::runtime_error("Value not found!\n");
    return it;
}

