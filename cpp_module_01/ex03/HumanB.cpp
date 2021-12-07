#include "HumanB.hpp"

void HumanB::attack(void) {
	if (this->weapon->getType() != nullptr)
	{
	std::cout << getName() << " attacks with his "
		<< this->weapon->getType() << std::endl;

	}
}
