/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:04:18 by abasante          #+#    #+#             */
/*   Updated: 2024/02/01 18:40:36 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedpointvalue(0) { 
}

Fixed::Fixed(const int n){
	_fixedpointvalue = (n << _bits);
}

Fixed::Fixed(const float n){
	_fixedpointvalue = roundf(n * (1 << _bits));
}

Fixed::Fixed( const Fixed& obj) {
	this->setRawBits(obj.getRawBits());
}

Fixed& Fixed::operator=( const Fixed &r ) {
    if (this != &r)
	{
        this->_fixedpointvalue = r.getRawBits();
	}
    return *this;
}

Fixed::~Fixed(){
}

int Fixed::getRawBits(void) const {
	return this->_fixedpointvalue;
}

void Fixed::setRawBits(int const raw){
	this->_fixedpointvalue = raw;
}

float Fixed::toFloat( void ) const {
	return this->_fixedpointvalue / (1 << _bits);
}

int Fixed::toInt( void ) const {
    return this->_fixedpointvalue >> _bits;
}

std::ostream& operator<<(std::ostream & o, Fixed const & i){
	o << i.toFloat();
	return (o);
}

bool Fixed::operator>(const Fixed &r)const{
	return (this->getRawBits() > r.getRawBits());
}

bool Fixed::operator<(const Fixed &r)const{
	return (this->getRawBits() < r.getRawBits());
}

bool Fixed::operator>=(const Fixed &r)const{
	return (this->getRawBits() >= r.getRawBits());
}

bool Fixed::operator<=(const Fixed &r)const{
	return (this->getRawBits() <= r.getRawBits());
}

bool Fixed::operator==(const Fixed &r)const{
	return (this->getRawBits() == r.getRawBits());
}

bool Fixed::operator!=(const Fixed &r)const{
	return (this->getRawBits() != r.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &r)const
{
	int a;
	//Fixed tmp;
	a = this->toFloat() + r.toFloat();
	//return (this->toFloat() + r.toFloat());
	return(a);
}

// Fixed Fixed::operator+(const Fixed &r)const{
// 	return (this->toFloat() + r.toFloat());
// }

Fixed Fixed::operator-(const Fixed &r)const{
	return (this->toFloat() - r.toFloat());
}

Fixed Fixed::operator*(const Fixed &r)const{
	return (this->toFloat() * r.toFloat());
}

Fixed Fixed::operator/(const Fixed &r)const{
	return (this->toFloat() / r.toFloat());
}

Fixed& Fixed::operator++(void){
	this->_fixedpointvalue++;
	return *this;
}

Fixed& Fixed::operator--(void){
	this->_fixedpointvalue--;
	return *this;
}

Fixed Fixed::operator++(int){
	Fixed tmp(*this);
	++(*this);
	return tmp;
}

Fixed Fixed::operator--(int){
	Fixed tmp(*this);
	--(*this);
	return tmp;
}

Fixed & Fixed::min(Fixed  &lhs, Fixed &rhs)
{
	if (lhs < rhs)
		return lhs;
	else
		return rhs;
}

Fixed & Fixed::max(Fixed  &lhs, Fixed &rhs)
{
	if (lhs > rhs)
		return lhs;
	else
		return rhs;
}
const Fixed & Fixed::min(const Fixed &lhs, const Fixed &rhs)
{
	if (lhs < rhs)
		return lhs;
	else
		return rhs;
}
const Fixed & Fixed::max(const Fixed &lhs, const Fixed &rhs)
{
	if (lhs > rhs)
		return lhs;
	else
		return rhs;
}
