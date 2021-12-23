// abstract class and interface

#include "includes/AMateria.hpp"
#include "includes/Ice.hpp"
#include "includes/Character.hpp"

int main() {
	// test copy function
	// {
		// Ice ice;
		// AMateria *ice_copy = ice.clone();
		// std::cout << ice.getType() << " " << ice_copy->getType() << std::endl;
		// delete ice_copy;
	// }

	{
		Ice *ice = new Ice;
		ICharacter *Masha = new Character("Masha");
		ICharacter *Igor = new Character("Igor");
		std::cout << "--------" << std::endl;
		// ice->use(*Masha);
		Masha->equip(ice);
		Masha->use(0, *Igor);
		
		delete ice;
		delete Masha;
	}

	return 0;
}