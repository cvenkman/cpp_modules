#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(std::string _name);
	WrongAnimal(const WrongAnimal &obj);
	~WrongAnimal();
	WrongAnimal& operator= (const WrongAnimal& obj);
	std::string getType(void) const;
	void setType(std::string _name);
	void makeSound();
	void makeSound() const;

protected:
	std::string type;
};

#endif