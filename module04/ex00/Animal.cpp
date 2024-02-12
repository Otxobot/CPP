/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 09:55:32 by abasante          #+#    #+#             */
/*   Updated: 2024/02/09 10:19:59 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Default") {
    std::cout << "Default animal constructor called!\n";
}

Animal::Animal(const Animal &obj){
    std::cout << "Copy animal constructor called!\n";
    *this = obj;
}

Animal::Animal(std::string type){
    std::cout << "Animal name constructor called!\n";
    this->type = type;
}

Animal &Animal::operator=(const Animal &rhs){
    this->type = rhs.getType();
    return *this;
}

Animal::~Animal(){
    std::cout << "Animal destructor called!\n";
}

std::string Animal::getType() const{
    return (this->type);
}

void Animal::makeSound() const{
    std::cout << "Animal sound\n";
}
