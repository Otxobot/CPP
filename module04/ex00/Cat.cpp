/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 09:55:22 by abasante          #+#    #+#             */
/*   Updated: 2024/02/09 10:20:46 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
    std::cout << "Default Cat constructor\n";
    this->type = "Cat";
}

Cat::Cat(const Cat &rhs) : Animal(){
    std::cout << "Cat copy constructor called\n";
    *this = rhs;
}

Cat &Cat::operator=(const Cat &rhs){
    this->type = rhs.getType();
    return (*this);
}

Cat::~Cat(){
    std::cout << "Cat destructor called\n";
}

void Cat::makeSound() const{
    std::cout << "Cat sound miau\n";
}
