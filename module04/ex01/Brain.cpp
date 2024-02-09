#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain default constructor called\n";
}

Brain::~Brain(){
    std::cout << "Brain default destructor called\n";
}

Brain::Brain(const Brain& obj){
    std::cout << "Brain copy constructor called\n";
    *this = obj;
}

Brain& Brain::operator=(const Brain& rhs){
    if (*this != rhs)
    {
        for (int i = 0; i < 100; i++){
            this->_ideas[i] = rhs._ideas[i];
        }
    }
    return (*this);
}
