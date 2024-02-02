/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:22:09 by abasante          #+#    #+#             */
/*   Updated: 2024/02/01 11:22:11 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"

#include <iostream>


/**
 * @class class ClapTrap
 * @param In the private section of the class, 
 * there is a string for the name of the claptrap, 
 * and 3 integers for the hit points, energy points and attack damage.
 * 
 * 
 * @param in the public section of the class,
 * there are 3 constructors and 1 destructor.
 * There is a default contructor, a contructor that receives a string
 * as the parameter to set the name of the ClapTrap object.
 * And there is a copy constructor.
 * 
 * @param this is a Orthodox Canonical Class form
 * 
 * @memberof @class there are 5 member functions in this class. 
 * 
 */
class ClapTrap
{   
    private:
        std::string _name;
        int hit_points;
        int energy_points;
        int attack_damage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &ClapTrap);
        ~ClapTrap();
        ClapTrap &operator=(const ClapTrap &ClapTrap);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void setAttackDamage(int attackd);
        int  getAttackDamage(void);
};

#endif