#include "../includes/Cat.hpp"

Cat::Cat() :Animal("nameless_katty"),
	cat_brain(new Brain) {
	std::cout << "CAT: Obj(nameless) created with constructor\n";
}

Cat::Cat(std::string _type) : Animal(_type),
	cat_brain(new Brain) {
	std::cout << "CAT: Default constructor for "
		<< type << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj) {
	*this = obj;
	std::cout << "CAT: Copy constructor for "
	<< type << std::endl;
}

Cat::~Cat() {
	delete this->cat_brain;
	this->cat_brain = NULL;
	std::cout << "CAT: Destructor for "
	<< type << std::endl;
}

Cat& Cat::operator= (const Cat& obj) {
	if (this != &obj) {
		this->type = obj.type;
		if (this->cat_brain != NULL)
			delete this->cat_brain;
		this->cat_brain = new Brain(*(obj.cat_brain));
		std::cout << "CAT: operator=\n";
	}
	return *this;
}

void Cat::makeSound() {
	std::cout << this->type << " say meow" << std::endl;
}

void Cat::makeSound() const {
	std::cout << this->type << " say meow" << std::endl;
}

void Cat::setBrain(std::string idea, int index) {
	this->cat_brain->setIdea(idea, index);
}

std::string Cat::getBrain(int index) {
	return this->cat_brain->getIdea(index);
}
