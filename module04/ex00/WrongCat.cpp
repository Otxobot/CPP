/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 09:57:03 by abasante          #+#    #+#             */
/*   Updated: 2024/02/09 10:27:11 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "Default WrongCat constructor\n";
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &rhs) : WrongAnimal(){
    std::cout << "WrongCat copy constructor called\n";
    *this = rhs;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs){
    this->type = rhs.getType();
    return (*this);
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called\n";
}

void WrongCat::makeSound() const{
    std::cout << "WrongCat sound miau\n";
}
