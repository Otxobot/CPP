/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:50:33 by abasante          #+#    #+#             */
/*   Updated: 2024/01/23 18:56:51 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
	_weapon = NULL;
}

HumanB::~HumanB()
{
	
}

void HumanB::setWeapon(Weapon &weapon_ref)
{
	_weapon = &weapon_ref;
}