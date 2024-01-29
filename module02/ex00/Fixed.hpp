/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:05:59 by abasante          #+#    #+#             */
/*   Updated: 2024/01/29 14:34:32 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
#define	FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed& obj);
		~Fixed();
		Fixed& operator=(const Fixed &rhs);
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int	_fixedpointvalue;
		static const int _bits = 8;
};

#endif