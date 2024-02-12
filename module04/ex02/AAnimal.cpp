/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 09:55:32 by abasante          #+#    #+#             */
/*   Updated: 2024/02/09 10:19:59 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal") {
    std::cout << "Default Aanimal constructor called!\n";
}

AAnimal::AAnimal(const AAnimal &obj){
    std::cout << "Copy Aanimal constructor called!\n";
    *this = obj;
}

AAnimal::AAnimal(std::string type){
    std::cout << "AAnimal name constructor called!\n";
    this->type = type;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs){
    this->type = rhs.getType();
    return *this;
}

AAnimal::~AAnimal(){
    std::cout << "AAnimal destructor called!\n";
}

std::string AAnimal::getType() const{
    return (this->type);
}

void AAnimal::makeSound() const{
    std::cout << "AAnimal sound\n";
}
