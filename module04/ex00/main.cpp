/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:49:32 by abasante          #+#    #+#             */
/*   Updated: 2024/02/09 10:16:53 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"


int main(void)
{
	std::cout << "========CREATE OBJECTS===========\n";
	const Animal* meta = new Animal();
	std::cout << "======================\n";
	const Animal* dog = new Dog();
	std::cout << "======================\n";
	const Animal* cat = new Cat();
	std::cout << "======================\n";
	std::cout << "=============GET TYPE===========\n";
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << "=============MAKE SOUND=========\n";
	dog->makeSound(); //will output the cat sound!
	cat->makeSound();
	meta->makeSound();
	std::cout << "=============DESTRUCTORS:=========\n";
	delete meta;
	delete dog;
	delete cat;

    std::cout << std::endl << "------------- Wrong Animal -------------" << std::endl;

    const WrongAnimal *wrong = new WrongAnimal();
    const WrongAnimal *wrongCat = new WrongCat();

    std::cout << "Wrong Type: " << wrong->getType() << " " << std::endl;
    std::cout << "WrongCat Type: " << wrongCat->getType() << " " << std::endl;
    wrong->makeSound();
    wrongCat->makeSound();

    delete  wrong;
    delete  wrongCat;
	return 0;
}
