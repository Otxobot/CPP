/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:38:01 by abasante          #+#    #+#             */
/*   Updated: 2024/03/12 15:55:05 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <deque>
#include <stdexcept>
#include <numeric>

class Span
{
	private:
		unsigned int _size;
		std::vector<int> _numbers;
	public:
		Span();
		Span(unsigned int n);
		Span(const Span& obj);
		~Span();
		Span& operator=(const Span& rhs);
		
		void addNumber(const int nta);
		int shortestSpan();
		int longestSpan();

		void addManyNumbers();
};

#endif