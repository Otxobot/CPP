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

Cat::Cat() : Animal("Cat") {
    std::cout << "Default Cat constructor\n";
    //this->type = "Cat";
    this->_brain = new Brain();
}

Cat::Cat(const Cat &rhs) : Animal(){
    std::cout << "Cat copy constructor called\n";
    *this = rhs;
}

Cat &Cat::operator=(const Cat &rhs){
    if (this != &rhs)
    {
        this->type = rhs.getType();
        this->_brain = new Brain(*rhs._brain);
    }
    return (*this);
}

Cat::~Cat(){
    std::cout << "Cat destructor called\n";
    delete this->_brain;
}

void Cat::makeSound() const{
    std::cout << "Cat sound miau\n";
}
