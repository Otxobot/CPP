/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:21:34 by abasante          #+#    #+#             */
/*   Updated: 2024/02/01 12:33:31 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

// public inheritance makes public members of the base class public in the derived class, and the protected members of the base class remain protected in the derived class.
// protected inheritance makes the public and protected members of the base class protected in the derived class.
// private inheritance makes the public and protected members of the base class private in the derived class.

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const& obj);
        ~ScavTrap();
        ScavTrap& operator=(ScavTrap const& rhs);
        void guardGate();
        void attack(const std::string& target);
};

#endif
