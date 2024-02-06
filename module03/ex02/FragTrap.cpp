
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
    std::cout << GREEN << "Fragtrap default constructor\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap name constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap( const FragTrap& obj ) : ClapTrap() {
	std::cout << BLUE << "FragTrap copy constructor called" << std::endl;
	*this = obj;
}

FragTrap::~FragTrap() {
	std::cout << MAGENTA << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrap) {
	std::cout << "FragTrap assignation operator called" << std::endl;
	this->_name = fragTrap._name;
	this->hit_points = fragTrap.hit_points;
	this->energy_points = fragTrap.energy_points;
	this->attack_damage = fragTrap.attack_damage;
	return *this;
}

void FragTrap::attack(const std::string& target)
{
    if (this->hit_points <= 0)
    {
        std::cout << "Fragtrap is to hurt to attack\n";
        return ;
    }
    else if(this->energy_points <= 0)
    {
        std::cout << "Fragtrap has no energy points\n";
        return ;
    }
    std::cout << RED << "Fragtrap " << this->_name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!\n";
    this->energy_points -= 1;
}

void FragTrap::highFivesGuys() {
	std::cout << "Fragtrap " << this->_name << " gave high fives to everyone!" << std::endl;
}