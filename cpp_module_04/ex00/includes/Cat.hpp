#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(std::string _name);
	Cat(const Cat &obj);
	~Cat();
	Cat& operator= (const Cat& obj);
	void makeSound();
	void makeSound() const;

};

#endif