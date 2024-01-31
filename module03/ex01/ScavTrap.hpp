#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ScavTrap(ScatTrap const& obj);
        ~ScavTrap();
        ScavTrap& operator=(ScavTrap const& rhs);
        void guardGate();
}

#endif
