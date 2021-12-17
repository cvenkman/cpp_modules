#include "includes/Animal.hpp"
#include "includes/Dog.hpp"
#include "includes/Cat.hpp"

int main()
{
	{
		Dog nameless_dog;
		Dog doggo("doggggggg");
		Dog dog(nameless_dog);
		std::cout << nameless_dog.getType() << std::endl;
		std::cout << doggo.getType() << std::endl;
		std::cout << dog.getType() << std::endl;
		std::cout << "@@@@@@@" << std::endl;

		dog.setType("dog");
		nameless_dog = dog;
		std::cout << nameless_dog.getType() << std::endl;
		std::cout << doggo.getType() << std::endl;
		std::cout << dog.getType() << std::endl;
	}
	std::cout << "------------------" << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* meta_tiger = new Animal("tiger");
		std::cout << std::endl;
		const Animal* j = new Dog();
		std::cout << std::endl;
		const Animal* i = new Cat();
		std::cout << std::endl;

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		meta_tiger->makeSound();
	}
}