/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:16:23 by abasante          #+#    #+#             */
/*   Updated: 2024/03/04 14:12:01 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void iter(T *array, int len, void(*func)(T&))
{
	for (int i = 0; i < len; i++)
		func(array[i]);
}

template<typename T>
void print(T &i)
{
	std::cout << i << std::endl;
}

#endif