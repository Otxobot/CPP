/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:05:57 by abasante          #+#    #+#             */
/*   Updated: 2024/01/29 14:44:01 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedpointvalue(0) { 
	std::cout << "Default Constructor called\n";
}

Fixed::Fixed( const Fixed& obj) {
	std::cout << "Copy Constructor called\n";
	this->setRawBits(obj.getRawBits());
}



Fixed::~Fixed(){

}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called\n";
	return this->_fixedpointvalue;
}

void Fixed::setRawBits(int const raw){
	this->_fixedpointvalue = raw;
}