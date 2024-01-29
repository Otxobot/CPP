/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:05:57 by abasante          #+#    #+#             */
/*   Updated: 2024/01/29 16:39:22 by abasante         ###   ########.fr       */
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

Fixed& Fixed::operator=( const Fixed &rhs ) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
	{
        this->_fixedpointvalue = rhs.getRawBits();
	}
    return *this;
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called\n";
	return this->_fixedpointvalue;
}

void Fixed::setRawBits(int const raw){
	this->_fixedpointvalue = raw;
}
