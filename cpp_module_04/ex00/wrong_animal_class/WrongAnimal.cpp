#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("nameless") {
	std::cout << "WRONGANIMAL: Obj(nameless) created with constructor\n";
}

WrongAnimal::WrongAnimal(std::string _type) : type(_type) {
	std::cout << "WRONGANIMAL: Default constructor for "
		<< type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj) : type(obj.type) {
	std::cout << "WRONGANIMAL: Copy constructor for "
	<< type << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WRONGANIMAL: Destructor for "
	<< type << std::endl;
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& obj) {
	this->type = obj.type;
	return *this;
}

std::string WrongAnimal::getType(void) const {
	std::cout << "WRONGANIMAL getType: ";
	return this->type;
}

void WrongAnimal::setType(std::string _type) {
	this->type = _type;
}

void WrongAnimal::makeSound() {
	std::cout << this->type << " say rrrr" << std::endl;
}

void WrongAnimal::makeSound() const{
	std::cout << this->type << " say rrrr" << std::endl;
}