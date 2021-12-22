// abstract class

#include "includes/Animal.hpp"
#include "includes/Dog.hpp"
#include "includes/Cat.hpp"
#include "includes/Brain.hpp"

#define ANIMAL_NUM 4

int main()
{
	//test for brain class
	// {
		// Brain brain; // default constructor
		// brain.setIdea("ddd", 1);
		// // Brain brain_copy(brain); // copy constructor
		// // Brain brain_copy = brain; // operator=
		// for (int i = 0; i < 3; i++)
		// 	std::cout << brain.getIdea(i) << std::endl;
	// }

	//test deep copy
	// {
		// Cat *cat = new Cat("cat");
		// std::cout << "cat: " << cat->getBrain(1) << std::endl;
		// cat->setBrain("qqq", 1);
		// std::cout << "cat: " << cat->getBrain(1) << std::endl;
		// Cat *copy_cat = new Cat(*cat);
		// copy_cat->setType("copy_cat");
		// std::cout << "copy_cat: " << copy_cat->getBrain(1) << std::endl;
		// std::cout << "------ delete cat: \n";
		// delete cat;
		// std::cout << "\ncopy_cat: " << copy_cat->getBrain(1) << std::endl;
		// delete copy_cat;
	// }

	{
		// Animal *animals[ANIMAL_NUM];
		// Animal ani; // error
		Animal **animals = new Animal* [ANIMAL_NUM];
		for (int i = 0; i < ANIMAL_NUM; i++) {
			if (i % 2 == 0)
				animals[i] = new Cat();
			else
				animals[i] = new Dog();
		}
		std::cout << "----------------\n";
		for (int i = 0; i < ANIMAL_NUM; i++)
			animals[i]->makeSound();
	
		std::cout << "---------- test get and set Brain: \n";
		std::cout << animals[1]->getBrain(0) << std::endl;
		std::cout << animals[1]->getBrain(1) << std::endl;
		std::cout << animals[1]->getBrain(2) << std::endl;
		std::cout << "---------- change second idea:\n";
		animals[1]->setBrain("sss", 1);
		std::cout << animals[1]->getBrain(0) << std::endl;
		std::cout << animals[1]->getBrain(1) << std::endl;
		std::cout << animals[1]->getBrain(2) << std::endl;

		std::cout << "---------- delete animals:\n";
		for (int i = 0; i < ANIMAL_NUM; i++)
			delete animals[i];
		delete [] animals;
	}
	return 0;
}