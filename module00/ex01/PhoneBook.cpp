/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:09:42 by abasante          #+#    #+#             */
/*   Updated: 2024/01/22 14:09:43 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::addContact()
{
    int i = 0;

    while (i < 7)
    {
        if (contacts[i].emptyContact())
        {
            break;
        }
        i++;
    }
    contacts[i].create_contact(i);
}

void PhoneBook::printBook()
{
    std::cout << "\n     index| firstName|  lastName|  nickname\n\n";
	for (int i = 0; i < 8; i++)
		contacts[i].getInfo();
	std::cout << "\n";
}

bool PhoneBook::emptyBook() {
	if (contacts[0].emptyContact() == 1)
		return 1;
	return 0;
}

bool PhoneBook::printContact(int index)
{
    if (index < 0 || index > 7 || contacts[index].emptyContact())
    {
        std::cout << "Indice no valido\n";
        return (1);
    }
    contacts[index].printInfo();
    return (0);
}
