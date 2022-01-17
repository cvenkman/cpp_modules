#include "../includes/Dog.hpp"

Dog::Dog() : Animal("default_doggo"),
	dog_brain(new Brain) {
	std::cout << "DOG: Obj(nameless) created with constructor\n";
}

Dog::Dog(std::string _type) : Animal(_type),
	dog_brain(new Brain) {
	std::cout << "DOG: Default constructor for "
		<< type << std::endl;
}

Dog::Dog(const Dog &obj) : Animal(obj) {
	if (&obj != this)
		*this = obj;
	std::cout << "DOG: Copy constructor for "
	<< type << std::endl;
}

Dog::~Dog() {
	delete this->dog_brain;
	this->dog_brain = NULL;
	std::cout << "DOG: Destructor for "
	<< type << std::endl;
}

Dog& Dog::operator= (const Dog& obj) {
	if (this != &obj) {
		this->type = obj.type;
		this->dog_brain = new Brain(*(obj.dog_brain));
		std::cout << "DOG: operator=\n";
	}
	return *this;
}

void Dog::makeSound() {
	std::cout << this->type << " say woof" << std::endl;
}

void Dog::makeSound() const {
	std::cout << this->type << " say woof" << std::endl;
}

void Dog::setBrain(std::string idea, int index) {
	this->dog_brain->setIdea(idea, index);
}

std::string Dog::getBrain(int index) {
	return this->dog_brain->getIdea(index);
}