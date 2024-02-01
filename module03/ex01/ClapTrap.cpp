/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:21:55 by abasante          #+#    #+#             */
/*   Updated: 2024/02/01 12:46:46 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), hit_points(10), energy_points(10), attack_damage(0){
    std::cout << GREEN << "Default claptrap constructor called\n";
}

ClapTrap::~ClapTrap(){
    std::cout << MAGENTA << "Claptrap destructor called\n";
}

ClapTrap::ClapTrap(std::string name) : _name(name), hit_points(10), energy_points(10), attack_damage(0){
    std::cout << BLUE << "Claptrap name constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &ClapTrap){
    std::cout << "Claptrap copy constructor called\n";
    *this = ClapTrap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& ClapTrap){
    std::cout << "Claptrap assignation operator called\n";
    this->_name = ClapTrap._name;
    this->hit_points = ClapTrap.hit_points;
    this->energy_points = ClapTrap.energy_points;
    this->attack_damage = ClapTrap.attack_damage;
    return *this;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->hit_points <= 0)
    {
        std::cout << "Claptrap is to hurt to attack\n";
        return ;
    }
    else if(this->energy_points <= 0)
    {
        std::cout << "Claptrap has no energy points\n";
        return ;
    }
    std::cout << RED << "Claptrap " << this->_name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!\n";
    this->energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit_points <= 0)
    {
        std::cout << "Claptrap is already dead\n";    
        return ;
    }
    if (amount > (unsigned)this->hit_points)
        amount = this->hit_points;
    std::cout << RED << "Claptrap " << this->_name << " took " << amount << " of damage!\n";
    this->hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy_points <= 0)
    {
        std::cout << "Claptrap has no energy to repair himself\n";
        return ;
    }
    if (amount + this->hit_points > 10)
        amount = 10 - this->hit_points;
    std::cout << GREEN << "Claptrap " << this->_name << " is repaired for " << amount << " points!\n";
    this->hit_points += amount;
    this->energy_points -= 1;
}

void ClapTrap::setAttackDamage(int attack_damage) {
	this->attack_damage = attack_damage;
}

int ClapTrap::getAttackDamage(void) {
	return attack_damage;
}
