/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 09:55:27 by abasante          #+#    #+#             */
/*   Updated: 2024/02/09 10:19:14 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

/*In C++, putting = 0 at the end of a virtual function declaration in a class definition means that the function is pure virtual.

A pure virtual function is a function that must be overridden in any non-abstract class that directly inherits from the class with the pure virtual function.
If a class has at least one pure virtual function, that class is considered abstract, and you cannot create an instance of an abstract class.
In your case, makeSound() is a pure virtual function in the AAnimal class. 
This means that any class that inherits from AAnimal must provide an implementation for makeSound(). 
It also means that you cannot create an instance of AAnimal directly.*/

class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal &obj);
		AAnimal &operator=(const AAnimal &rhs);
		virtual ~AAnimal();
		std::string getType() const;
		virtual void makeSound() const = 0;
};

#endif