
#include "PhoneBook.hpp"

void Contact::create_contact(int i){
    do{
        std::cout << "First name: ";
        getline(std::cin, _Firstname);
    }while (emptyLine(_Firstname));
    do{
        std::cout << "Last name: ";
        getline(std::cin, _Lastname);
    }while (emptyLine(_Lastname));
    do{    
        std::cout << "_Nickname: ";
        getline(std::cin, _Nickname);   
    }while (emptyLine(_Nickname));
    while (1){
        std::cout << "Phone number: ";
        getline(std::cin, _Phonenumber);
        if (emptyLine(_Phonenumber) || !isNumber(_Phonenumber))
            std::cout << "Tiene que ser un numero: ";
        else
            break;
    }
    do {
		std::cout << "Darkest secret: ";
		getline(std::cin, _darkestsecret);
	} while (emptyLine(_darkestsecret));
    index = i;
    std::cout << "New contact created succesfully!\n";
}

int Contact::emptyContact()
{
    if (emptyLine(_Firstname))
        return (1);
    return (0);
}

std::string resizeString(std::string s, int len) 
{
		s.resize(len);
	return s;
}

void Contact::getInfo()
{
	if (!emptyLine(_Firstname)) 
    {
		std::cout << std::setw(10) << index << "|";
		std::cout << std::setw(10) << (_Firstname.length() < 10 ? _Firstname : resizeString(_Firstname, 9)+'.') << "|";
		std::cout << std::setw(10) << (_Lastname.length() < 10 ? _Lastname : resizeString(_Lastname, 9)+'.') << "|";
		std::cout << std::setw(10) << (_Nickname.length() < 10 ? _Nickname : resizeString(_Nickname, 9)+'.') << "\n";
	}
}
