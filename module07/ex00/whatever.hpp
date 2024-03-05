/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:57:16 by abasante          #+#    #+#             */
/*   Updated: 2024/03/05 17:45:13 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &x, T &y)
{
	T tmp;

	tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
T min(T &x, T &y)
{
	if (x < y)
		return (x);
	return (y);
}

template <typename T>
T max(T &x, T &y)
{
	if (x > y)
		return (x);
	return (y);
}

#endif