#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Weapon.hpp"

class HumanA {
private:
	std::string name;
	Weapon&		weapon;
public:
	HumanA(std::string name_, Weapon& weapon_);
	const std::string& getName(void);
	void setName(std::string name);
	void attack(void);
};

#endif