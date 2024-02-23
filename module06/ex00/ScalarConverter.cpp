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
#include <exception>
#include <cstdlib>

ScalarConverter::ScalarConverter(){
}

ScalarConverter::ScalarConverter(ScalarConverter const & src){
	*this = src;
}

ScalarConverter::~ScalarConverter(){
}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const & rhs){
	(void)rhs;
	return *this;
}

void ScalarConverter::convert(const std::string &str)
{
	int i;
	double d;
	float f;
	char c;
	
	try{
		if (str == "nan" || str == "nanf" || str == "inff" || str == "inf" || str == "-inff" || str == "-inf")
			throw std::exception();
	if (std::isdigit(str[0]))
	{
			i = (std::atoi(str.c_str()));
			f = static_cast<float>(std::atof(str.c_str()));
			d = std::atof(str.c_str());
	}
	else
	{
			i = static_cast<int>(str[0]);
			f = static_cast<float>(i);
			d = static_cast<double>(i);
	}

		c = static_cast<char>(i);
		std::cout << "char: ";
		if (i < 32 || i > 126)
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << "'" << c << "'" << std::endl;
		std::cout << "int: " << i << std::endl;
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
}