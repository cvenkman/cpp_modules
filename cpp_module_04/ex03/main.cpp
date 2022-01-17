/* interface */

#include "includes/Ice.hpp"
#include "includes/Cure.hpp"
#include "includes/Character.hpp"
#include "includes/MateriaSource.hpp"

int main()
{
	// { // test Ice class: clone function
	// 	Ice *ice = new Ice;
	// 	AMateria *ice_copy = ice->clone();
	// 	std::cout << ice->getType() << " " << ice_copy->getType() << std::endl;
	// 	delete ice_copy;
	// 	delete ice;
	// }

	// { // test Character class: equip, unequip, use
	// 	Ice *ice = new Ice;
	// 	ICharacter *Masha = new Character("Masha");
	// 	ICharacter *Igor = new Character("Igor");
	// 	std::cout << "-------------\n";
	// 	Masha->use(0, *Igor);
	// 	Masha->equip(ice);
	// 	Masha->use(0, *Igor);
	// 	Masha->use(2, *Igor);
	// 	delete ice;
	// 	delete Masha;
	// }

	// { // test MateriaSource copy contsructor and operator=
	// 	MateriaSource a;
	// 	MateriaSource b(a);
	// 	a = b;
	// }

	// { // test full inventory
	// 	ICharacter *Masha = new Character("Masha");
	// 	IMateriaSource* inventory = new MateriaSource();
	// 	inventory->learnMateria(new Ice);
	// 	inventory->learnMateria(new Cure);
	// 	std::cout << "-------------\n";
	// 	AMateria *tmp;
	// 	// try to create unknown materia
	// 	tmp = inventory->createMateria("onii-chan");
	// 	tmp = inventory->createMateria("ice");
	// 	Masha->equip(tmp);
	// 	tmp = inventory->createMateria("ice");
	// 	Masha->equip(tmp);
	// 	std::cout << "-------------\n";
	// 	Masha->use(0, *Masha);
	// 	Masha->use(0, *Masha);
	// 	std::cout << "-------------\n";
	// 	tmp = inventory->createMateria("ice");
	// 	Masha->equip(tmp);
	// 	tmp = inventory->createMateria("ice");
	// 	Masha->equip(tmp);
	// 	tmp = inventory->createMateria("ice");
	// 	Masha->equip(tmp);
	// 	std::cout << "------------- full:\n";
	// 	tmp = inventory->createMateria("ice");
	// 	Masha->equip(tmp);
	// 	std::cout << "-------------\n";
	// 	Masha->unequip(3);
	// 	tmp = inventory->createMateria("cure");
	// 	Masha->equip(tmp);
	// 	Masha->use(2, *Masha);
	// 	Masha->use(3, *Masha);
	// 	std::cout << "-------------\n";
	// 	delete Masha;
	// 	delete inventory;
	// 	while (1); // leaks
	// }

	{ // main from subject (test learn and createMateria)
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
		// while (1);
	}
	return 0;
}
