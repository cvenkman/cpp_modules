#include "../includes/Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "CURE: default constructor for "
		<< type << std::endl;
}

Cure::Cure(std::string const &_type) : AMateria(_type) {
	std::cout << "Cure: constructor with type for "
		<< type << std::endl;
}

Cure::Cure(const Cure& obj) : AMateria(obj.type) {
	std::cout << "CURE: copy constructor for "
		<< type << std::endl;
}

Cure::~Cure() {
	std::cout << "CURE: Destructor for "
		<< type << std::endl;
}

Cure& Cure::operator= (const Cure& obj) {
	this->type = obj.type;
	std::cout << "CURE: operator= for "
		<< type << std::endl;
	return *this;
}

AMateria* Cure::clone() const {
	return (new Cure(*this));
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " <<
		target.getName() << "'s wounds *\n";
}
