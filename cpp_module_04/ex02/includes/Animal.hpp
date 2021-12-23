#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
protected:
	std::string type;
	Animal();
	Animal(std::string _name);
	Animal(const Animal &obj);
	Animal& operator= (const Animal& obj);
public:
	virtual ~Animal();
	std::string getType(void) const;
	void setType(std::string _name);
	virtual void makeSound() = 0;
	virtual void makeSound() const = 0;
	virtual std::string getBrain(int index) = 0;
	virtual void setBrain(std::string idea, int index) = 0;

};

#endif