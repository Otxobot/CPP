/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:41:21 by abasante          #+#    #+#             */
/*   Updated: 2024/03/18 16:12:03 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	int arr[] = {1, 2, 3, 4, 5};

	std::cout << "Vector:" << std::endl;
	std::vector<int>  vect(arr, arr + sizeof(arr) / sizeof(int));
	easyfind(vect, 3);
	std::cout << "================================" << std::endl;
	std::cout << "List:" << std::endl;
	std::list<int> list(arr, arr + sizeof(arr) / sizeof(int));
	easyfind(list, 7);
	std::cout << "================================" << std::endl;
	std::cout << "Deque:" << std::endl;
	std::deque<int> deque(arr, arr + sizeof(arr) / sizeof(int));
	easyfind(deque, 2);

	return 0;
}
