/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:21:45 by abasante          #+#    #+#             */
/*   Updated: 2024/02/06 13:23:16 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//En C++, cuando un objeto de una clase derivada es destruido, 
//primero se llama al destructor de la clase derivada y luego al destructor de la clase base. 
//Esto es porque la creación de un objeto de una clase derivada implica primero construir el objeto base y luego construir el objeto derivado.
//Por lo tanto, la destrucción ocurre en el orden inverso: primero se destruye el objeto derivado y luego el objeto base

// C++ Implementation to show that a derived class
// doesn’t inherit access to private data members.
// However, it does inherit a full parent object.
// class A {
// public:
//     int x;
 
// protected:
//     int y;
 
// private:
//     int z;
// };
 
// class B : public A {
//     // x is public
//     // y is protected
//     // z is not accessible from B
// };
 
// class C : protected A {
//     // x is protected
//     // y is protected
//     // z is not accessible from C
// };
 
// class D : private A // 'private' is default for classes
// {
//     // x is private
//     // y is private
//     // z is not accessible from D
// };

// public inheritance makes public members of the base class public in the derived class, and the protected members of the base class remain protected in the derived class.
// protected inheritance makes the public and protected members of the base class protected in the derived class.
// private inheritance makes the public and protected members of the base class private in the derived class.

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
