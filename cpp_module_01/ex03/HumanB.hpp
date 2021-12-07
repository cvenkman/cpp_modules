#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
	std::string name;
	Weapon		*weapon;
public:
	HumanB(std::string name_) : name(name_), weapon(NULL) {}
	const std::string& getName(void) {return this->name; }
	void setName(std::string name) {this->name = name; }
	void setWeapon(Weapon &weapon_) {this->weapon = &weapon_; }
	void attack(void);
};

#endif