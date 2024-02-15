/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:25:05 by abasante          #+#    #+#             */
/*   Updated: 2024/02/14 16:04:12 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    // try {
	// 	std::cout << "\nTEST 1\n";
	// 	Form F("Test", 150, 1);
	// }
	// catch (const std::exception& e) {
	// 	std::cout << "Caught exception: " << e.what() << "\n";
	// }
	// try {
	// 	std::cout << "\nTEST 2\n";
	// 	Form F("Test", 42, -42);
	// }
	// catch (const std::exception& e) {
	// 	std::cout << "Caught exception: " << e.what() << "\n";
	// }
	try {
		std::cout << "\nTEST 3\n";
		Form F("Test", 42, 42);
		std::cout << F;
		Bureaucrat B1("Pepe", 100);
		Bureaucrat B2("David", 23);
		F.beSigned(B1);
		F.beSigned(B2);
        if (F.getIsSigned())
            std::cout << "F is signed now\n";
        else
            std::cout << "F is not signed now\n";
	}
	catch (const std::exception& e) {
		std::cout << "Caught exception: " << e.what() << "\n";
	}
	// try {
	// 	std::cout << "\nTEST 4\n";
	// 	Form F("Test", 84, 42);
	// 	std::cout << F;
	// 	Bureaucrat B1("Pepe", 100);
	// 	F.beSigned(B1);
	// }
	// catch (const std::exception& e) {
	// 	std::cout << "Caught exception: " << e.what() << "\n";
	// }
	// try {
	// 	std::cout << "\nTEST 5\n";
	// 	Form F("Test", 84, 42);
	// 	std::cout << F;
	// 	Bureaucrat B1("Pepe", 100);
	// 	B1.signForm(F);
	// }
	// catch (const std::exception& e) {
	// 	std::cout << "Caught exception: " << e.what() << "\n";
	// }
	return 0;
}
