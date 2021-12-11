#include "HumanB.hpp"

HumanB::HumanB(std::string name_) : name(name_) {
	this->weapon = NULL;
}

const std::string& HumanB::getName(void) {
	return this->name;
}

void HumanB::attack(void) {
	if (this->weapon == NULL)
		std::cout << "No weapon" << std::endl;
	else {
		std::cout << getName() << " attacks with his "
			<< this->weapon->getType() << std::endl;
	}
}
