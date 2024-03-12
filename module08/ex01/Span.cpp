/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:37:59 by abasante          #+#    #+#             */
/*   Updated: 2024/03/12 13:29:36 by abasante         ###   ########.fr       */
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
	if (_numbers.size() >= _size)
		throw std::out_of_range("Max number of integers reached\n");
	else
	{
		this->_numbers.push_back(nta);
	}
}
