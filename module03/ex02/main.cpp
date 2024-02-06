/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:21:45 by abasante          #+#    #+#             */
/*   Updated: 2024/02/06 13:19:12 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file main.cpp
 * @author abasante
 * @brief This file only contains the main function.
 * @version 0.1
 * @date 2024-02-02
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

/**
 * @brief Main function.
 * 
 * @param void
 * 
 * @return int 
 */

//En C++, cuando un objeto de una clase derivada es destruido, 
//primero se llama al destructor de la clase derivada y luego al destructor de la clase base. 
//Esto es porque la creación de un objeto de una clase derivada implica primero construir el objeto base y luego construir el objeto derivado.
//Por lo tanto, la destrucción ocurre en el orden inverso: primero se destruye el objeto derivado y luego el objeto base

int main(void)
{
	FragTrap obj1;
	FragTrap obj2("tonto");
	FragTrap obj3(obj2);
	
	obj1.highFivesGuys();
	obj2.highFivesGuys();
	obj3.highFivesGuys();
	return (0);
}
