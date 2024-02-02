/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:22:05 by abasante          #+#    #+#             */
/*   Updated: 2024/02/01 11:22:06 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ClapTrap.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-02-02
 * 
 * @copyright Copyright (c) 2024
 * 
 */

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

/**
 * @brief Overload of the operator =
 * Receives a reference to a ClapTrap object.
 * This overload copies all of the attributes inside the object received as
 * paramater to the object that is going to be returned. 
 * 
 * @param ClapTrap 
 * @return ClapTrap& 
 */

ClapTrap& ClapTrap::operator=(const ClapTrap& ClapTrap){
    std::cout << "Claptrap assignation operator called\n";
    this->_name = ClapTrap._name;
    this->hit_points = ClapTrap.hit_points;
    this->energy_points = ClapTrap.energy_points;
    this->attack_damage = ClapTrap.attack_damage;
    return *this;
}

/**
 * @brief Member function of @class claptrap
 * attacks the @param target, who receives the damage later.
 * Outputs a message that says claptrap (name) attacks (target) causing x amount 
 * of damage
 * 
 * @param target 
 */

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

/**
 * @brief Member function of @class claptrap
 * In the case that another claptrap attacks, this function is used
 * to take away the hit points caused by that attack. The object that calls this 
 * member function is the claptrap that is taking the damage.
 * 
 * @param amount 
 */

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

/**
 * @brief Member function of @class ClapTrap
 * beRepaired. It repairs ClapTraps hit points if he has energy points left. 
 * and it takes one energy point to repair himself.
 * 
 * If the amount plus the hit points claptrap has already is greater than ten
 * it will do 10 - hit points to put the amount left to get to 10 maximum.
 * @param amount 
 */

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

/**
 * @brief Member function to  @class ClapTrap called setAttackDamage
 * it sets the attack_damage attribute to the int received by the memeber function.
 * 
 * @param attack_damage 
 */

void ClapTrap::setAttackDamage(int attack_damage) {
	this->attack_damage = attack_damage;
}

/**
 * @brief Member function to  @class ClapTrap called getAttackDamage
 * it returns the attack_damage int in the class.
 * 
 * @return int 
 */

int ClapTrap::getAttackDamage(void) {
	return attack_damage;
}
