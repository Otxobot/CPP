/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:48:21 by abasante          #+#    #+#             */
/*   Updated: 2024/03/29 16:48:23 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() : input("") {

}

RPN::RPN(std::string input) : input(input){

}


RPN::RPN(const RPN &other){
    *this = other;
}

RPN& RPN::operator=(const RPN &rhs)
{
    if (this != &rhs)
    {
        this->_stack = rhs._stack;
        this->input = rhs.input;
    }
    return (*this);
}

RPN::~RPN(){
	
}

void	RPN::calculate()
{
	if (this->input.empty())
		return ;
	std::istringstream string_stream(input);
	std::string input_str;
	while (string_stream >> input_str)
	{
		if (input_str == "+" || input_str == "-" || input_str == "*" || input_str == "/" || input_str == "%")
		{
			if (_stack.size() < 2)
			{
				std::cout << RED << "Error: Not enough values" << std::endl;
				return ;
			}
			double a = _stack.top();
			_stack.pop();	
			double b = _stack.top();
			_stack.pop();
			if (input_str == "+")
				_stack.push(b + a);
			else if (input_str == "-")
				_stack.push(b - a);
			else if (input_str == "*")
				_stack.push(b * a);
			else if (input_str == "/" && b != 0)
				_stack.push(b / a);
			else if (input_str == "/" && b == 0)
			{
				std::cout << RED << "Error: Division by zero" << std::endl;
				return ;
			}
		}
		else if (std::isdigit(input_str[0]))
		{
			double number;
			if (atof(input_str.c_str()) < 0 || atof(input_str.c_str()) > 9)
			{
				std::cout << RED << "Error: Invalid value" << std::endl;
				return ;
			}
			number = atof(input_str.c_str());
			_stack.push(number);
		}
		else
		{
			std::cout << RED << "Error: Invalid value" << std::endl;
			return ;
		}
	}
	if (_stack.size() > 1)
	{
		std::cout << RED << "Error: Too many values" << std::endl;
		return ;
	}
	std::cout << _stack.top() << std::endl;
}