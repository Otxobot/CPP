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

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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
