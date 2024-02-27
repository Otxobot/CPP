/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:49:27 by abasante          #+#    #+#             */
/*   Updated: 2024/02/27 13:49:29 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() 
{
	Data D;
	Data *ptr;

	ptr = &D;

	uintptr_t unsigned_pointer;

	unsigned_pointer = Serializer::serialize(ptr);

	std::cout << Serializer::serialize(ptr) << std::endl;
	std::cout << unsigned_pointer << std::endl;
	std::cout << "================================\n";
	std::cout << Serializer::deserialize(unsigned_pointer) << std::endl;
	std::cout << ptr << std::endl;
	
	return 0;
}
