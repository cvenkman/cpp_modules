#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :
	ClapTrap("nameless", 100, 50, 20) {
	std::cout << "SCAV: Obj(nameless) created with constructor\n";
}

ScavTrap::ScavTrap(std::string _name) :
	ClapTrap(_name, 100, 50, 20) {
	std::cout << "SCAV: Default constructor for "
	<< this->name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) :
	ClapTrap(obj.name, obj.hitpoints, obj.energy_points,
	obj.attack_damage) {
	std::cout << "SCAV: Copy constructor for "
	<< name << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "SCAV: Destructor for "
	<< this->name << std::endl;
}

ScavTrap& ScavTrap::operator= (const ScavTrap& obj) {
	this->name = obj.name;
	this->hitpoints = obj.hitpoints;
	this->energy_points = obj.energy_points;
	this->attack_damage = obj.attack_damage;
	std::cout << "SCAV: operator=\n";
	return *this;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->name
	<< " have enterred in Gate keeper mode\n";
}