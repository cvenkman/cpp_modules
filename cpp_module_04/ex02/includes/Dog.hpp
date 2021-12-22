#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(std::string _name);
	Dog(const Dog &obj);
	~Dog();
	Dog& operator= (const Dog& obj);
	void makeSound();
	void makeSound() const;
	void setBrain(std::string idea, int index);
	std::string getBrain(int index);
private:
	Brain *dog_brain;
};

#endif