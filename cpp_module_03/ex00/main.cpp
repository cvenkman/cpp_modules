// just class, nothing new

#include "ClapTrap.hpp"

int main(void) {
	ClapTrap No_Name;
	ClapTrap Hisoka("Hisoka");
	ClapTrap Gon(No_Name);

	std::cout << Gon.getName() << " " << No_Name.getName() << std::endl;
	No_Name.setName("Gon");
	Gon = No_Name;
	std::cout << Gon.getName() << " " << No_Name.getName() << std::endl;
	Gon.attack(Hisoka.getName());
	Gon.takeDamage(6);
	Gon.beRepaired(4);
}