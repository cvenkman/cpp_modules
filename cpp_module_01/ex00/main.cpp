#include "Zombie.hpp"
// #define zombie_on_stack
#define zombie_in_heap
// #define zombie_randomChump

int main() {
	#ifdef zombie_on_stack
	Zombie Killua("Killua");
	Zombie Zoldyck("Zoldyck");
	#endif

	#ifdef zombie_in_heap
	Zombie *Igor = new Zombie("Igor");
	Zombie *Masha = Zombie::newZombie("Masha");

	delete Igor;
	delete Masha;
	Igor = 0;
	Masha = 0;
	#endif

	#ifdef zombie_randomChump
	randomChump("Hisoka");
	randomChump("Gon");
	#endif

	return 0;
}
