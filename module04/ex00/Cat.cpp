#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Default Cat constructor\n";
    this->type = "Cat";
}

Cat::Cat(const Cat &rhs) : Animal(){
    std::cout << "Cat copy constructor called\n";
    *this = rhs;
}

Cat &Cat::operator=(const Cat &rhs){
    this->type = rhs.getType();
    return (*this);
}

Cat::~Cat(){
    std::cout << "Cat destructor called\n";
}

void Cat::makeSound() const{
    std::cout << "Cat sound prrrr\n";
}
