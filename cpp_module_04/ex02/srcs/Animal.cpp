#include "../includes/Animal.hpp"

Animal::Animal() : type("nameless") {
	std::cout << "ANIMAL: Obj(nameless) created with Default constructor\n";
}

Animal::Animal(std::string _type) : type(_type) {
	std::cout << "ANIMAL: constructor with type for "
		<< type << std::endl;
}

Animal::Animal(const Animal &obj) : type(obj.type) {
	std::cout << "ANIMAL: Copy constructor for "
	<< type << std::endl;
}

Animal::~Animal() {
	std::cout << "ANIMAL: Destructor for "
	<< type << std::endl;
}

Animal& Animal::operator= (const Animal& obj) {
	this->type = obj.type;
	return *this;
}

std::string Animal::getType(void) const {
	std::cout << "getType: ";
	return this->type;
}

void Animal::setType(std::string _type) {
	this->type = _type;
}
