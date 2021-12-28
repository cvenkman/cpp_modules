#include "../includes/AMateria.hpp"

AMateria::AMateria() : type("no_type") {
	std::cout << "AMATERIA: default constructor for "
		<< type << std::endl;
}

AMateria::AMateria(std::string const &_type) :
	type(_type) {
	std::cout << "AMATERIA: constructor with type for "
		<< type << std::endl;
}

AMateria::~AMateria() {
	std::cout << "AMATERIA: Destructor for "
		<< type << std::endl;
}

std::string const &AMateria::getType() const {
	return this->type;
}

void AMateria::use(ICharacter& target) {
	std::cout << target.getName() <<
		" doesn't do anything *\n";
}