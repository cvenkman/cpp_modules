#include "../includes/Brain.hpp"

Brain::Brain() {
	std::cout << "BRAIN: default constructor\n";
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "-";
}

Brain::Brain(const Brain &obj) {
	std::cout << "BRAIN: copy constructor\n";
	*this = obj;
}

Brain& Brain::operator= (const Brain& obj) {
	std::cout << "BRAIN: operator=\n";
	if (this != &obj) {
		for (int i = 0; i < 100; i++)
			this->ideas[i] = obj.ideas[i];
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "BRAIN: Destructor\n";
}

std::string Brain::getIdea(int index) const {
	return this->ideas[index];
}

void Brain::setIdea(std::string idea, int index) {
	this->ideas[index] = idea;
}