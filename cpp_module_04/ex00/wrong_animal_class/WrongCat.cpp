#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("default_wrong_cat") {
	std::cout << "WRONG: Obj(nameless) created with constructor\n";
}

WrongCat::WrongCat(std::string _type) : WrongAnimal(_type) {
	std::cout << "WRONG: Default constructor for "
		<< type << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj) {
	std::cout << "WRONG: Copy constructor for "
	<< type << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WRONG: Destructor for "
	<< type << std::endl;
}

WrongCat& WrongCat::operator= (const WrongCat& obj) {
	this->type = obj.type;
	return *this;
}

void WrongCat::makeSound() {
	std::cout << this->type << " say meowaaaaaa onii-chan..." << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << this->type << " say meowaaaaaa onii-chan..." << std::endl;
}
