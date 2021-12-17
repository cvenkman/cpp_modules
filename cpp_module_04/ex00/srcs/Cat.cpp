#include "../includes/Cat.hpp"

Cat::Cat() : Animal("default_katty") {
	std::cout << "CAT: Obj(nameless) created with constructor\n";
}

Cat::Cat(std::string _type) : Animal(_type) {
	std::cout << "CAT: Default constructor for "
		<< type << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj) {
	std::cout << "CAT: Copy constructor for "
	<< type << std::endl;
}

Cat::~Cat() {
	std::cout << "CAT: Destructor for "
	<< type << std::endl;
}

Cat& Cat::operator= (const Cat& obj) {
	this->type = obj.type;
	return *this;
}

void Cat::makeSound() {
	std::cout << this->type << " say meow" << std::endl;
}

void Cat::makeSound() const {
	std::cout << this->type << " say meow" << std::endl;
}