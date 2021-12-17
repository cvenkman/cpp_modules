#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat(std::string _name);
	WrongCat(const WrongCat &obj);
	~WrongCat();
	WrongCat& operator= (const WrongCat& obj);
	void makeSound();
	void makeSound() const;
};

#endif