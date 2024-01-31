#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap
{   
    private:
        std::string _name;
        int hit_points;
        int energy_points;
        int attack_damage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &ClapTrap);
        ~ClapTrap();
        ClapTrap &operator=(const ClapTrap &ClapTrap);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void setAttackDamage(int attackd);
        int  getAttackDamage(void);
};

#endif