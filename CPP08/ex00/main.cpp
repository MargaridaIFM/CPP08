/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:10:44 by mfrancis          #+#    #+#             */
/*   Updated: 2025/11/04 17:24:26 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::cout << "Testing with vectors:";
    std::vector<int> nbrs;
    for (int i = 0; i < 10; i++)
        nbrs.push_back(i * 10);
    try
    {
        std::vector<int>::iterator it;
        it = easyfind(nbrs, 30);
        std::cout << "Find: " << *it << std::endl;
        
        it = easyfind(nbrs, 200);
        std::cout << "Find: " << *it << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "Testing with lists:";
    std::list<int> listNbr;
    for (int i = 0; i < 10; i++)
        listNbr.push_back(i * 10);
     try
    {
        std::list<int>::iterator it;
        it = easyfind(listNbr, 30);
        std::cout << "Find: " << *it << std::endl;
        
        it = easyfind(listNbr, 200);
        std::cout << "Find: " << *it << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}