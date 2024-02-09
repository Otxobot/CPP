/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 09:55:09 by abasante          #+#    #+#             */
/*   Updated: 2024/02/09 09:55:11 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Default Dog constructor\n";
    this->type = "Dog";
}

Dog::Dog(const Dog &rhs) : Animal(){
    std::cout << "Dog copy constructor called\n";
    *this = rhs;
}

Dog &Dog::operator=(const Dog &rhs){
    this->type = rhs.getType();
    return (*this);
}

Dog::~Dog(){
    std::cout << "Dog destructor called\n";
}

void Dog::makeSound() const{
    std::cout << "Dog sound woof woof\n";
}