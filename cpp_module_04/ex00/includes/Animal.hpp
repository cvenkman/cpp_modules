#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
public:
	Animal();
	Animal(std::string _name);
	Animal(const Animal &obj);
	~Animal();
	Animal& operator= (const Animal& obj);
	std::string getType(void) const;
	void setType(std::string _name);
	virtual void makeSound();
	virtual void makeSound() const;

protected:
	std::string type;
};

#endif