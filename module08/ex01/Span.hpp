/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:38:01 by abasante          #+#    #+#             */
/*   Updated: 2024/03/12 16:09:18 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <stdexcept>

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

		void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};

#endif