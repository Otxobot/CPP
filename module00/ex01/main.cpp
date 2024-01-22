/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:09:37 by abasante          #+#    #+#             */
/*   Updated: 2024/01/22 14:09:39 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int isNumber(std::string s)
{
	for (int i = 0; i < (int)s.length(); i++)
		if (std::isdigit(s[i]) == 0 && s[i] != ' ')
			return 0;
	return 1;
}

int emptyLine(std::string s)
{
    if (s.empty())
        return (1);
    for (int i = 0; i < (int)s.length(); i++){
        if (std::isspace(s[i]) == 0)
            return (0);
    }
    return (1);
}

void message()
{
    std::cout << "\nBienvenido al phonebook📞!:\nMete uno de los siguientes commandos:\n\n";
    std::cout << "----------------------------------" << std::endl;
    std::cout << "ADD\t: Para añadir un contacto." << std::endl;
    std::cout << "SEARCH\t: Para buscar un contacto." << std::endl;
    std::cout << "EXIT\t: Para dejar de usar el phonebook." << std::endl;
    std::cout << "----------------------------------" << std::endl;
    std::cout << std::endl;
}

int main(void)
{
    PhoneBook   phonebook;
    std::string command;
    std::string index;

    message();
    while (1)
    {
        if (getline(std::cin, command))
        {
            if (command == "ADD")
                phonebook.addContact();
            else if (command == "SEARCH")
            {
                if(phonebook.emptyBook())
                {
                    std::cout << "No hay contactos en la agenda.\n";
                    message();
                    continue ;
                }
                phonebook.printBook();
                std::cout << "Introduce el index del contacto que quieres ver: ";
                getline(std::cin, index);
                if (emptyLine(index))
                    std::cout << "Indice no valido\n";
                if (isNumber(index))
                {
                    if (phonebook.printContact(stoi(index)) == 1)
                        std::cout << "Contacto no valido\n";
                }
                else
                    std::cout << "Indice no valido\n";
            }
            else if (command == "EXIT")
                break ;
            else
                std::cout << "El comando tiene que ser ADD, SEARCH o EXIT\n";
        }
    }
    return (0);
}
