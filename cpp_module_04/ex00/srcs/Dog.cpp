#include "../includes/Dog.hpp"

Dog::Dog() : Animal("default_doggo") {
	std::cout << "DOG: Obj(nameless) created with constructor\n";
}

Dog::Dog(std::string _type) : Animal(_type) {
	std::cout << "DOG: Default constructor for "
		<< type << std::endl;
}

Dog::Dog(const Dog &obj) : Animal(obj) {
	std::cout << "DOG: Copy constructor for "
	<< type << std::endl;
}

Dog::~Dog() {
	std::cout << "DOG: Destructor for "
	<< type << std::endl;
}

Dog& Dog::operator= (const Dog& obj) {
	this->type = obj.type;
	return *this;
}

void Dog::makeSound() {
	std::cout << this->type << " say woof" << std::endl;
}

void Dog::makeSound() const {
	std::cout << this->type << " say woof" << std::endl;
}