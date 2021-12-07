#include "HumanA.hpp"

HumanA::HumanA(std::string name_, Weapon& weapon_) :
	name(name_), weapon(weapon_) {}

const std::string& HumanA::getName(void) {return this->name; }

void HumanA::setName(std::string name) {this->name = name; }

void HumanA::attack(void) {
	std::cout << getName() << " attacks with his "
		<< this->weapon.getType() << std::endl;
}
