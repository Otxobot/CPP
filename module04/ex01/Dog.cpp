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

Dog::Dog() : Animal("Dog") {
    std::cout << "Default Dog constructor\n";
    //this->type = "Dog";
    this->_brain = new Brain();
}

Dog::Dog(const Dog &rhs) : Animal(){
    std::cout << "Dog copy constructor called\n";
    *this = rhs;
}

// The second error is because you are trying to create a new Brain object with a pointer to a Brain object
//  (rhs._brain is a pointer, because _brain is a pointer in your Dog class). 
//  The Brain constructor expects a reference to a Brain object, not a pointer. 
//  You should dereference the pointer to pass the actual object to the constructor.

// In this code, we first compare the addresses of the objects, not the objects themselves. 
// If they are not the same, we delete the old _brain to avoid memory leak, 
// and then create a new Brain object by dereferencing the pointer rhs._brain.

Dog &Dog::operator=(const Dog &rhs){
    if (this != &rhs) // compare addresses, not objects
    {
        this->type = rhs.getType();
        delete this->_brain;
        this->_brain = new Brain(*rhs._brain); // dereference the pointer so that the brain constructor can receive an actual object not a pointer to the object.
    }
    return (*this);
}

Dog::~Dog(){
    std::cout << "Dog destructor called\n";
    delete this->_brain;
}

void Dog::makeSound() const{
    std::cout << "Dog sound woof woof\n";
}