/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:45:15 by abasante          #+#    #+#             */
/*   Updated: 2024/03/04 12:37:34 by abasante         ###   ########.fr       */
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


bool isDecimal(const std::string& str, int len) 
{
	bool dot = false;
	int i = 0;

	if (str[i] == '-')
		i+=1;
	for (; i < len; i++) {
		if (!std::isdigit(str[i]) && dot)
			return false;
		if (str[i] == '.')
			dot = true;
		if (!std::isdigit(str[i]) && !dot)
			return false;
	}
	if (dot == true)
		return true;
	return false;
}

void checkType(const std::string &str)
{
	int i;
	double d;
	float f;
	char c;

	if (isNumber(str))
	{
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
	if (isDecimal(str, str.size() - 1) && str[str.size() - 1] == 'f')
	{
		f = std::strtod(str.c_str(), NULL);
		c = static_cast<char>(f);
		i = static_cast<int>(f);
		d = static_cast<double>(f);
	}
	if (isDecimal(str, str.size()))
	{
		d = std::strtod(str.c_str(), NULL);
		c = static_cast<char>(d);
		i = static_cast<int>(d);
		f = static_cast<double>(d);
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
