#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(std::string _name);
	Cat(const Cat &obj);
	~Cat();
	Cat& operator= (const Cat& obj);
	void makeSound();
	void makeSound() const;
	void setBrain(std::string idea, int index);
	std::string getBrain(int index);
private:
	Brain *cat_brain;
};

#endif