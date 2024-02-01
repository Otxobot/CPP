/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:41:02 by abasante          #+#    #+#             */
/*   Updated: 2024/02/01 11:48:04 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedpointvalue(0) { 
	std::cout << "Default Constructor called\n";
}

Fixed::Fixed(const int n){
	std::cout << "int constructor called\n";
	_fixedpointvalue = (n << _bits);
}

Fixed::Fixed(const float n){
	std::cout << "float constructor called\n";
	_fixedpointvalue = std::roundf(n * (1 << _bits));
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
	return this->_fixedpointvalue;
}

void Fixed::setRawBits(int const raw){
	this->_fixedpointvalue = raw;
}

float Fixed::toFloat( void ) const {
	return (float)this->_fixedpointvalue / (1 << _bits);
}

int     Fixed::toInt( void ) const {
    return this->_fixedpointvalue >> _bits;
}

std::ostream& operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return (o);
}
