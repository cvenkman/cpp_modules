// inherit

#include "FragTrap.hpp"

int main(void) {
	FragTrap No_Name;
	FragTrap Hisoka("Hisoka");
	FragTrap Gon(No_Name);

	std::cout << Gon.getName() << " " << No_Name.getName() << std::endl;
	No_Name.setName("Gon");
	Gon = No_Name;
	std::cout << Gon.getName() << " " << No_Name.getName() << std::endl;
	Gon.attack(Hisoka.getName());
	Gon.takeDamage(6);
	Gon.beRepaired(4);
	Gon.highFivesGuys();
	Hisoka.highFivesGuys();
}