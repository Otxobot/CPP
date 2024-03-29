/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:48:26 by abasante          #+#    #+#             */
/*   Updated: 2024/03/29 16:48:27 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <iostream>
#include <sstream>
#include <string>
#include <cmath>

#define RED "\033[0;31m"

class RPN
{
    private:
        std::stack<int> _stack;
        std::string input;
    public:
        RPN();
        RPN(std::string input);
        RPN(const RPN &other);
	    RPN &operator=(const RPN &rhs);
	    ~RPN();

	    void calculate();
};

#endif