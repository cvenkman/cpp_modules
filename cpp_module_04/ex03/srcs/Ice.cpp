#include "../includes/Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "ICE: default constructor for "
		<< type << std::endl;
}

// Ice::Ice(std::string const &_type) : AMateria(_type) {
// 	std::cout << "ICE: constructor with type for "
// 		<< type << std::endl;
// }

Ice::Ice(const Ice& obj) : AMateria(obj.type) {
	std::cout << "ICE: copy constructor for "
		<< type << std::endl;
}

Ice::~Ice() {
	std::cout << "ICE: Destructor for "
		<< type << std::endl;
}

Ice& Ice::operator= (const Ice& obj) {
	this->type = obj.type;
	std::cout << "ICE: operator= for "
		<< type << std::endl;
	return *this;
}

AMateria* Ice::clone() const {
	AMateria *tmp = new Ice(*this);
	return tmp;
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " <<
		target.getName() << " *\n";
}
