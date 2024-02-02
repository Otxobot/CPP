/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:04:30 by abasante          #+#    #+#             */
/*   Updated: 2024/01/30 15:07:00 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
#define	FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed& obj);
		Fixed(const int n);
		Fixed(const float n);
		~Fixed();
		Fixed& operator=(const Fixed &r);

		int getRawBits(void) const;
		void setRawBits(int const raw);

		float toFloat(void) const;
		int toInt(void) const;

		//comparison:
		bool	operator>(const Fixed &r)const;
		bool	operator<(const Fixed &r)const;
		bool	operator>=(const Fixed &r)const;
		bool	operator<=(const Fixed &r)const;
		bool	operator==(const Fixed &r)const;
		bool	operator!=(const Fixed &r)const;
	
		//arithmetic:
		Fixed	operator+(const Fixed &r)const;
		Fixed	operator-(const Fixed &r)const;
		Fixed	operator*(const Fixed &r)const;
		Fixed	operator/(const Fixed &r)const;

		//increment/decrement
		Fixed	operator++(int);
		Fixed	operator--(int);
		Fixed&  operator++(void);
		Fixed&  operator--(void);

		static Fixed& min(Fixed &lhs, Fixed &rhs);
		static Fixed& max(Fixed  &lhs, Fixed &rhs);
		static const Fixed& min(Fixed const &lhs, Fixed const &rhs);
		static const Fixed& max(Fixed const &lhs, Fixed const &rhs);

	private:
		int	_fixedpointvalue;
		static const int _bits = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif