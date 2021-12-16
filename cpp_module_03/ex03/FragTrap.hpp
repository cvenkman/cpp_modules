#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
	FragTrap();
	FragTrap(std::string _name);
	FragTrap(const FragTrap &obj);
	~FragTrap();
	FragTrap& operator= (const FragTrap& obj);
	void highFivesGuys();
};

#endif