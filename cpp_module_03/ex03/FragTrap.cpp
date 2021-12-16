#include "FragTrap.hpp"

FragTrap::FragTrap() :
	ClapTrap("nameless", 100, 100, 30) {
	std::cout << "FRAG: Obj(nameless) created with constructor\n";
}

FragTrap::FragTrap(std::string _name) :
	ClapTrap(_name, 100, 100, 30) {
	std::cout << "FRAG: Default constructor for "
	<< this->name << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj) :
	ClapTrap(obj.name, obj.hitpoints, obj.energy_points,
	obj.attack_damage) {
	std::cout << "FRAG: Copy constructor for "
	<< name << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FRAG: Destructor for "
	<< this->name << std::endl;
}

FragTrap& FragTrap::operator= (const FragTrap& obj) {
	this->name = obj.name;
	this->hitpoints = obj.hitpoints;
	this->energy_points = obj.energy_points;
	this->attack_damage = obj.attack_damage;
	std::cout << "FRAG: operator=\n";
	return *this;
}

void FragTrap::highFivesGuys() {
	std::cout << "High fives request from " <<
		this->name << std::endl;
}