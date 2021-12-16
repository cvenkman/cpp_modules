#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() :
	ClapTrap("no_clap_name", 100, 50, 30), ScavTrap(),
	FragTrap(), name("no") {
	std::cout << "DIAMOND: Default constructor for "
	<< this->name << std::endl;
}

DiamondTrap::DiamondTrap(std::string _name) :
	ClapTrap(_name + "_clap_name", 100, 50, 30), ScavTrap(_name),
	FragTrap(_name), name(_name) {
	std::cout << "DIAMOND: Default constructor for "
	<< this->name << std::endl;
}

// DiamondTrap::DiamondTrap(std::string _name) :
// 	ScavTrap(_name),
// 	FragTrap(_name),
// 	ClapTrap(_name + "_clap_name", 100, ScavTrap::energy_points, 30), name(_name) {
// 	std::cout << "DIAMOND: Default constructor for "
// 	<< this->name << std::endl;
// }

DiamondTrap::DiamondTrap(const DiamondTrap &obj) :
	ClapTrap(obj.name, obj.hitpoints, obj.energy_points,
	obj.attack_damage), ScavTrap(obj.name), FragTrap(obj.name) {
	this->name = obj.name;
	std::cout << "DIAMOND: Copy constructor for "
	<< this->name << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DIAMOND: Destructor for "
	<< this->name << std::endl;
}

// DiamondTrap& DiamondTrap::operator= (const DiamondTrap& obj) {
// 	this->name = obj.name;
// 	this->hitpoints = obj.hitpoints;
// 	this->energy_points = obj.energy_points;
// 	this->attack_damage = obj.attack_damage;
// 	std::cout << "Diamond: operator=\n";
// 	return *this;
// }

void DiamondTrap::attack(std::string const & target) {
	ScavTrap::attack(target);
}

std::string DiamondTrap::getName(void) {return this->name; }

void DiamondTrap::setName(std::string _name) {
	this->name = _name;
}

void DiamondTrap::whoAmI() {
	std::cout << "Hi! I am " << this->name <<
		" and " << ClapTrap::getName() << std::endl;
}