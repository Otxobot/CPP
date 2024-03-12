/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:37:59 by abasante          #+#    #+#             */
/*   Updated: 2024/03/12 13:52:09 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){
}

Span::Span(unsigned int n) : _size(n) {
	
}

Span::Span(const Span& obj) : _size(obj._size) {
	
}

Span::~Span(){
	
}

Span& Span::operator=(const Span& rhs)
{
	if (this != &rhs)
	{
		this->_size = rhs._size;
		this->_numbers = rhs._numbers;
	}
	return (*this);
}

void Span::addNumber(int nta)
{
	if (this->_numbers.size() >= _size)
		throw std::out_of_range("Max number of integers reached\n");
	else
	{
		this->_numbers.push_back(nta);
	}
}

int Span::shortestSpan()
{
	if (this->_numbers.size() < 2)
		throw std::logic_error("Not enough numbers to calculate span");
	std::sort(_numbers.begin(), _numbers.end());
	for (unsigned int i = 0; i < this->_size; i++)
	{
		std::cout << this->_numbers[i] << std::endl;
	}
	std::vector<int> diff(_numbers.size() - 1);
	std::adjacent_difference(_numbers.begin(), _numbers.end() - 1, diff.begin());
	// for (unsigned int i = 0; i < (this->_size - 1); i++)
	// {
	// 	std::cout << "diff: " << diff[i] << std::endl;
	// }
	return *std::min_element(diff.begin(), diff.end());
}

int Span::longestSpan()
{
	return 0;
}