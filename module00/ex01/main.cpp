
#include "PhoneBook.hpp"

void message(){
    std::cout << "\nBienvenido al phonebook📞!:\nMete uno de los siguientes commandos:\n\n";
    std::cout << "----------------------------------" << std::endl;
    std::cout << "ADD\t: Para añadir un contacto." << std::endl;
    std::cout << "SEARCH\t: Para buscar un contacto." << std::endl;
    std::cout << "EXIT\t: Para dejar de usar el phonebook." << std::endl;
    std::cout << "----------------------------------" << std::endl;
    std::cout << std::endl;
}

int main(void){
    PhoneBook   phonebook;
    std::string command;

    message();
    while (1)
    {
        if (getline(std::cin, command)){
            if (command == "ADD")
            {
                std::cout << "el commando es ADD!\n";
                phonebook.addContact();
            }
            else if (command == "SEARCH")
                std::cout << "el commando es SEARCH!\n";
            else if (command == "EXIT")
                break ;
        }
    }
    return (0);
}
