// inherit

#include "ScavTrap.hpp"

int main(void) {
	ScavTrap No_Name;
	ScavTrap Hisoka("Hisoka");
	ScavTrap Gon(No_Name);

	std::cout << Gon.getName() << " " << No_Name.getName() << std::endl;
	No_Name.setName("Gon");
	Gon = No_Name;
	std::cout << Gon.getName() << " " << No_Name.getName() << std::endl;
	Gon.attack(Hisoka.getName());
	Gon.takeDamage(6);
	Gon.beRepaired(4);
	Gon.guardGate();
	Hisoka.guardGate();
}