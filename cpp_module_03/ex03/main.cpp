// inherit

#include "DiamondTrap.hpp"

int main(void) {
	{ // constructor, destructor, whoAmI, getName and setName
		DiamondTrap No_Name;
		DiamondTrap Hisoka("Hisoka");
		DiamondTrap Gon(No_Name);

		std::cout << "@@@ " << Hisoka.getName() << std::endl;
		std::cout << "@@@ " << Gon.getName() << std::endl;
		std::cout << "@@@ " << No_Name.getName() << std::endl;
		Gon.setName("Gon");
		std::cout << "@@@ " << Hisoka.getName() << std::endl;
		std::cout << "@@@ " << Gon.getName() << std::endl;
		std::cout << "@@@ " << No_Name.getName() << std::endl;
		Gon.whoAmI();
		Hisoka.whoAmI();
		No_Name.whoAmI();
	}
	std::cout << std::endl << std::endl;

	{ // operator=, attack, guardGate and other functions
		DiamondTrap No_Name;
		DiamondTrap Hisoka("Hisoka");
		Hisoka.printAllInfo();
		No_Name.printAllInfo();
		No_Name = Hisoka;
		Hisoka.printAllInfo();
		No_Name.printAllInfo();
		std::cout << std::endl;
		Hisoka.attack("QQQQ");
		No_Name.attack("WWWW");
		Hisoka.guardGate();
		Hisoka.highFivesGuys();
		Hisoka.takeDamage(10);
		Hisoka.beRepaired(5);
		std::cout << std::endl;
	}
}