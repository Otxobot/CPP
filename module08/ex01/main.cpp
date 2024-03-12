/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:37:55 by abasante          #+#    #+#             */
/*   Updated: 2024/03/12 17:38:17 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
		Span sp = Span(5);
		int arr[] = {1, 423, 3645, 345345 ,45645 , 24534};
		std::vector<int>::const_iterator const1;
		std::vector<int> nums(arr, arr + sizeof(arr) / sizeof(arr[0]));
		
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		
		sp.addManyNumbers(nums.begin(), nums.end());
	return 0;
}
