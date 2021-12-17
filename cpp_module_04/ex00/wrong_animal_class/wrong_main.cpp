#include "WrongCat.hpp"

int main()
{
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* j = new WrongCat("wrong_cat");

	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	meta->makeSound();
}
