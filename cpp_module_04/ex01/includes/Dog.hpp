#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(std::string _name);
	Dog(const Dog &obj);
	~Dog();
	Dog& operator= (const Dog& obj);
	void makeSound();
	void makeSound() const;
};

#endif