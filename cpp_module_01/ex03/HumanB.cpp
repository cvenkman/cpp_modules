#include "HumanB.hpp"

void HumanB::attack(void) {
	if (this->weapon == NULL)
		std::cout << "No weapon" << std::endl;
	else {
		std::cout << getName() << " attacks with his "
			<< this->weapon->getType() << std::endl;
	}
}
