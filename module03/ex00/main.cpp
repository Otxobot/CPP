/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:22:14 by abasante          #+#    #+#             */
/*   Updated: 2024/02/01 11:22:16 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file main.cpp
 * @author abasante (absante@student.42.fr)
 * @brief 
 * @version 0.1
 * @date 2024-02-02
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "ClapTrap.hpp"

/**
 * @brief This is the main function, It declares 4 diferent ClapTrap
 * objects. Some use different constructors.
 * 
 * The main function creates four ClapTrap objects (ASDF, A, B, C). 
 * It sets their attack damage, makes them attack, 
 * and makes them take damage or be repaired. 
 * The operations are performed in the order they are written.
 * 
 * @return int 0
 */

int main() {
	ClapTrap ASDF;
	ClapTrap A("Ana"), B("Bob");
	ClapTrap C(B);
	A.setAttackDamage(10);
	A.attack("Bob");
	B.takeDamage(10);
	B.beRepaired(10);
	B.setAttackDamage(20);
	B.attack("Ana");
	C.setAttackDamage(30);
	C.attack("Ana");
	A.takeDamage(20);
	A.takeDamage(30);
	return 0;
}
