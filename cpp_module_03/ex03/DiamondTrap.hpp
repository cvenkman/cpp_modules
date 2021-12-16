#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
public:
	DiamondTrap();
	DiamondTrap(std::string _name);
	DiamondTrap(const DiamondTrap &obj);
	~DiamondTrap();
	std::string getName(void);
	void setName(std::string _name);
	DiamondTrap& operator= (const DiamondTrap& obj);
	void highFivesGuys();
	void attack(std::string const & target);
private:
	std::string name;
};

#endif