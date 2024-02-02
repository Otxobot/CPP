/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:21:45 by abasante          #+#    #+#             */
/*   Updated: 2024/02/01 12:51:23 by abasante         ###   ########.fr       */
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

/**
 * @brief Main function.
 * 
 * @param void
 * 
 * 
 * @return int 
 */

int main(void)
{
	ScavTrap scavi("scavi");
	scavi.guardGate();
	ScavTrap scavo(scavi);
	ScavTrap equals;

	equals = scavi;
	equals.attack("scavo");
	return (0);
}
