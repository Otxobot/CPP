/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:38:01 by abasante          #+#    #+#             */
/*   Updated: 2024/03/11 11:26:51 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <deque>

class Span
{
	private:
		std::vector<int> _numbers;
		unsigned int _N;
	public:
		Span();
		Span(unsigned int n) : _N(n), _numbers() {}
		Span(const Span& obj) : _N(obj._N), _numbers(obj._numbers) {}
		
};

#endif