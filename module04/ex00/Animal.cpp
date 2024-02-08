#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Default animal constructor called!\n";
}

Animal::Animal(const Animal &obj){
    std::cout << "Copy animal constructor called!\n";
    *this = obj;
}

Animal &Animal::operator=(const Animal &rhs){
    this->type = rhs.getType();
    return *this;
}

Animal::~Animal(){
    std::cout << "Animal destructor called!\n";
}

std::string Animal::getType() const{
    return (this->type);
}

void Animal::makeSound() const{
    std::cout << "Animal sound\n";
}
