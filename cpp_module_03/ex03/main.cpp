// inherit

#include "DiamondTrap.hpp"

int main(void) {
	DiamondTrap No_Name;
	DiamondTrap Hisoka("Hisoka");
	// No_Name = Hisoka;
	DiamondTrap Gon(No_Name);

	std::cout << "@@@ " << Hisoka.getName() << std::endl;
	std::cout << "@@@ " << Gon.getName() << std::endl;
	std::cout << "@@@ " << No_Name.getName() << std::endl;
	// Hisoka.attack("d");
	// Hisoka.beRepaired(2);
	// Hisoka.guardGate();
	// std::cout << Gon.getName() << " " << No_Name.getName() << std::endl;
	No_Name.setName("Gon");
	std::cout << "@@@ " << Hisoka.getName() << std::endl;
	std::cout << "@@@ " << Gon.getName() << std::endl;
	std::cout << "@@@ " << No_Name.getName() << std::endl;
	// Gon = No_Name;
	// std::cout << Gon.getName() << " " << No_Name.getName() << std::endl;
	// Gon.attack(Hisoka.getName());
	// Gon.takeDamage(6);
	// Gon.beRepaired(4);
	// Gon.highFivesGuys();
	// Hisoka.highFivesGuys();
}