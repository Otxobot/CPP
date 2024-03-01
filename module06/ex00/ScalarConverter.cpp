/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:45:15 by abasante          #+#    #+#             */
/*   Updated: 2024/02/29 10:49:19 by abasante         ###   ########.fr       */
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


void specialCase(const std::string &str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (str == "nanf") 
	{
		std::cout << "float: " << str << std::endl;
		std::cout << "double: nan" << std::endl;
	} 
	else if (str == "+inff") 
	{
		std::cout << "float: " << str << std::endl;
		std::cout << "double: +inf" << std::endl;
	} 
	else if (str == "-inff") 
	{
		std::cout << "float: " << str << std::endl;
		std::cout << "double: -inf" << std::endl;
	} else 
	{
		std::cout << "float: " << str << "f" << std::endl;
		std::cout << "double: " << str << std::endl;
	}
}

void checkType(const std::string &str)
{
	int i;
	double d;
	float f;
	char c;

	if (std::isdigit(str[0]))
	{
			i = (std::atoi(str.c_str()));
			f = static_cast<float>(std::atof(str.c_str()));
			d = static_cast<double>(std::atof(str.c_str()));
	}
	else
	{
			i = static_cast<int>(str[0]);
			f = static_cast<float>(i);
			d = static_cast<double>(i);
	}
	c = static_cast<char>(i);
	if (i < 32 || i > 126)
	{
		std::cout << "char: no imprimible" << std::endl;
	}
	else
		std::cout << "char: " << "'" << c << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << ((f-i == 0.0f) ? ".0" : "") << "f\n";
	std::cout << "double: " << d << ((d-i == 0.0f) ? ".0" : "") << std::endl;
}

void ScalarConverter::convert(const std::string &str)
{
	if (str == "nan" || str == "nanf" || str == "+inf" || str == "-inf" || str == "+inff" || str == "-inff")
		specialCase(str);
	else
		checkType(str);
}
