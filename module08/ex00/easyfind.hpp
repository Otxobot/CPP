/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:41:18 by abasante          #+#    #+#             */
/*   Updated: 2024/03/18 16:11:11 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <deque>

template <typename T>
int easyfind(T& container, int number)
{
	if (std::find(container.begin(), container.end(), number) != container.end())
    {
        std::cout << "Found" << std::endl;
        return (0);
    }
    else
    {
        std::cout << "Not found" << std::endl;
        return (1);
    }
}   

#endif