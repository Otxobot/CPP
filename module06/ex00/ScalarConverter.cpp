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

bool isNumber(const std::string &str)
{
	int i = 0;
	if (str[i] == '-')
		i += 1;
	for (; str[i]; i++)
		if (!std::isdigit(str[i]))
			return false;
	return true;
}

bool isCharString(const std::string &str)
{
	int i = 0;

	for (; str[i]; i++)
	{
		if (!std::isalpha(str[i]))
			return (0);
	}
	return (1);
}

void checkType(const std::string &str)
{
	int i;
	double d;
	float f;
	char c;

	if (!isCharString(str))
	{
		std::cout << "ha entrado aqui\n";
		return ;
	}
	if (isNumber(str))
	{
		std::cout << "es un numero entoces entra aqui\n";
		i = std::atof(str.c_str());
		c = static_cast<char>(i);
		f = static_cast<float>(i);
		d = static_cast<double>(i);
	}
	if (str.size() == 1 && !isNumber(str))
	{
		c = str[0];
		i = static_cast<int>(c);
		f = static_cast<float>(c);
		d = static_cast<double>(c);
	}
	// if (std::isdigit(str[0]))
	// {
	// }
	else
	{
			i = static_cast<int>(str[0]);
			f = static_cast<float>(i);
			d = static_cast<double>(i);
	}
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
	if (str.empty())
		return ;
	if (str == "nan" || str == "nanf" || str == "+inf" || str == "-inf" || str == "+inff" || str == "-inff")
		specialCase(str);
	else
		checkType(str);
}
