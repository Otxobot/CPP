/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:37:59 by abasante          #+#    #+#             */
/*   Updated: 2024/03/12 17:04:07 by abasante         ###   ########.fr       */
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
	std::sort(this->_numbers.begin(), this->_numbers.end());
	
	int minSpan = _numbers[1] - _numbers[0];
	for (size_t i = 1; i < this->_numbers.size(); ++i) 
	{
        int currentSpan = _numbers[i] - _numbers[i - 1];
        minSpan = std::min(minSpan, currentSpan);
    }
	return (minSpan);
}

int Span::longestSpan()
{
    if (_numbers.size() < 2)
        throw std::logic_error("Not enough numbers to calculate span");
    int min = *std::min_element(_numbers.begin(), _numbers.end());
    int max = *std::max_element(_numbers.begin(), _numbers.end());
	
    return (max - min);
}

template <typename T>
void Span::addManyNumbers(T begin, T end)
{
	if (_numbers.size() >= _size || (unsigned int)absolute(begin-end) > _size)
		throw std::out_of_range("Max number of integers reached\n");
	for (; begin < end; begin++)
	{
		_numbers.push_back(*begin);
	}
}
