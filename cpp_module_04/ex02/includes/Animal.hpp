#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
public:
	Animal();
	Animal(std::string _name);
	Animal(const Animal &obj);
	virtual ~Animal();
	Animal& operator= (const Animal& obj);
	std::string getType(void) const;
	void setType(std::string _name);
	virtual void makeSound() = 0;
	virtual void makeSound() const = 0;
	virtual std::string getBrain(int index) = 0;
	virtual void setBrain(std::string idea, int index) = 0;

protected:
	std::string type;
};

#endif