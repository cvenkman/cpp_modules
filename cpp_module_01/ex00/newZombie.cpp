#include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string name) {
	Zombie *tmp = new Zombie(name);
	return tmp;
}
