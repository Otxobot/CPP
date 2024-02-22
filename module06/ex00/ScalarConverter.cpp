/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:45:15 by abasante          #+#    #+#             */
/*   Updated: 2024/02/21 17:04:14 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


ScalarConvertor::ScalarConvertor(){
}

ScalarConvertor::ScalarConvertor(ScalarConvertor const & src){
	*this = src;
}

ScalarConvertor::~ScalarConvertor(){
}

ScalarConvertor & ScalarConvertor::operator=(ScalarConvertor const & rhs){
	(void)rhs;
	return *this;
}

