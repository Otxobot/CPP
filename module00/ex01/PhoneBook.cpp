
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : count(0) {}
PhoneBook::~PhoneBook() {}

void PhoneBook::addContact(void){
    std::string input;

    contacts[count % max].setIndex();
}