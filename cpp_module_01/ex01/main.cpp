#include "Zombie.hpp"

int main() {
	int horde = 3;
	Zombie *first = Zombie::zombieHorde(horde, "i am zombie");
	for (int i = 0; i < horde; i++)
		first[i].announce();
	first[10].setName("awd");
	first[10].announce();
	delete[] first;
	return 0;
}
