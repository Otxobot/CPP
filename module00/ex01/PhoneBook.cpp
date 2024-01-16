
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
