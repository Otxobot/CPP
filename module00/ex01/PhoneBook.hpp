/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:09:51 by abasante          #+#    #+#             */
/*   Updated: 2024/01/22 14:09:53 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <cstring>

class Contact {
    private:
        std::string _Firstname, _Lastname, \
        _Nickname, _Phonenumber, _darkestsecret;
        int index;
    public:
        void create_contact(int i);
        void getInfo();
        void printInfo();
        int emptyContact();
};

class PhoneBook {
    public:
        void printBook();
        void addContact();
        bool emptyBook();
        bool printContact(int index);
    private:
        Contact contacts[8];
};

int emptyLine(std::string s);
int isNumber(std::string s);

#endif