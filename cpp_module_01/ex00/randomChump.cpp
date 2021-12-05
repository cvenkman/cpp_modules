#include "Zombie.hpp"

void randomChump(std::string name) {
	Zombie *new_zombie = Zombie::newZombie(name);
	delete new_zombie;
	new_zombie = 0;
}
