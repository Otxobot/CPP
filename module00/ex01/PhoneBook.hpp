
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook {
    public:
        PhoneBook();
        ~PhoneBook();
        void addContact(void);
        void searchContact(void);
    private:
        static int const max = 8;
        int count;
        Contact contacts[max];
};

#endif