
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
    std::cout << GREEN << "Fragtrap default constructor\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->hp = 100;
	this->energy = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap constructor called" << std::endl;
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
	this->name = fragTrap.name;
	this->hp = fragTrap.hp;
	this->energy = fragTrap.energy;
	this->attackDamage = fragTrap.attackDamage;
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
	std::cout << "FragTrap " << this->name << " gave high fives to everyone!" << std::endl;
}