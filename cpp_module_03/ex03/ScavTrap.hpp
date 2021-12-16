#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
	ScavTrap();
	ScavTrap(std::string _name);
	ScavTrap(const ScavTrap &obj);
	~ScavTrap();
	ScavTrap& operator= (const ScavTrap& obj);
	void guardGate();
};

#endif