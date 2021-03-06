#include "../includes/Animal.hpp"

Animal::Animal() : type("nameless") {
	std::cout << "ANIMAL: Obj(nameless) created with constructor\n";
}

Animal::Animal(std::string _type) : type(_type) {
	std::cout << "ANIMAL: Default constructor for "
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

void Animal::makeSound() {
	std::cout << this->type << " say rrrr" << std::endl;
}

void Animal::makeSound() const{
	std::cout << this->type << " say rrrr" << std::endl;
}

std::string Animal::getBrain(int index) {return NULL; }
void Animal::setBrain(std::string idea, int index) {}