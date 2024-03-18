/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:37:55 by abasante          #+#    #+#             */
/*   Updated: 2024/03/18 16:05:50 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::srand(time(0));
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span sp1 = Span(10);
	std::vector<int> v;
	for(int i = 0; i < 10; i++)
		v.push_back(rand() % 10);
	sp1.addRange(v.begin(), v.end());

	std::vector<int>::iterator it = sp1.getbegin();

	std::cout << "============sp1:================" << std::endl;
	for(int i = 0; i < 10; i++)
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
	std::cout << "============sp1:================" << std::endl;
	
	std::cout << std::endl;
	std::cout << "Shortest span: " <<sp1.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp1.longestSpan() << std::endl;
	return (0);
}
