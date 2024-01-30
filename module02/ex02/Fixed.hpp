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

		
	private:
		int	_fixedpointvalue;
		static const int _bits = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif