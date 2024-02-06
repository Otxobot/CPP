/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:21:29 by abasante          #+#    #+#             */
/*   Updated: 2024/02/01 12:50:28 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "Scavtrap default constructor called\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const& obj) : ClapTrap(obj){
	std::cout << "Scavtrap copy constructor called\n";
	*this = obj;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& rhs){
	std::cout << "Scavtrap overloaded operator called\n";
	this->hit_points = rhs.hit_points;
	this->energy_points = rhs.energy_points;
	this->attack_damage = rhs.attack_damage;
	return *this;
}

ScavTrap::~ScavTrap(){
	std::cout << "Scavtrap destructor called\n";
}

void ScavTrap::guardGate(){
	std::cout << "Scavtrap " << this->_name << " is now in gatekeeper mode\n";
}

void ScavTrap::attack(const std::string& target){
	std::cout << RED << "Scavtrap " << this->_name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!\n";
}
