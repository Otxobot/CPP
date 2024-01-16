
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

    message();
    while (1)
    {
        if (getline(std::cin, command))
        {
            if (command == "ADD")
                phonebook.addContact();
            else if (command == "SEARCH")
            {
                phonebook.printBook();
            }
            else if (command == "EXIT")
                break ;
            else
                std::cout << "El comando tiene que ser ADD, SEARCH o EXIT\n";
        }
    }
    return (0);
}
