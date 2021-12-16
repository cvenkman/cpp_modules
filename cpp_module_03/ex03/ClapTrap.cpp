#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
	name("nameless"), hitpoints(10), energy_points(10),
	attack_damage(0) {
	std::cout << "CLAP: Obj(nameless) created with constructor\n";
}

ClapTrap::ClapTrap(std::string _name) :
	name(_name), hitpoints(10), energy_points(10),
	attack_damage(10) {
	std::cout << "CLAP: Default constructor for "
	<< name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj) :
	name(obj.name), hitpoints(obj.hitpoints),
	energy_points(obj.energy_points),
	attack_damage(obj.attack_damage) {
	std::cout << "CLAP: Copy constructor for "
	<< name << std::endl;
}

ClapTrap::ClapTrap(std::string _name, int _hitpoints,
	int _energy_points, int _attack_damage) {
	this->name = _name;
	// this->setName(_name);
	this->hitpoints = _hitpoints;
	this->energy_points = _energy_points;
	this->attack_damage = _attack_damage;
	std::cout << "CLAP: Constructor for ALL "
	<< name << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "CLAP: Destructor for "
	<< name << std::endl;
}

ClapTrap& ClapTrap::operator= (const ClapTrap& obj) {
	this->name = obj.name;
	this->hitpoints = obj.hitpoints;
	this->energy_points = obj.energy_points;
	this->attack_damage = obj.attack_damage;
	std::cout << "CLAP: operator=\n";
	return *this;
}

std::string ClapTrap::getName(void) const {
	return this->name;
}

void ClapTrap::setName(std::string _name) {
	this->name = _name;
}

void ClapTrap::attack(std::string const & target) {
	std::cout << this->name << " attack "
	<< target << ", causing " << this->attack_damage
	<< " points of damage!" << std::endl;
	this->energy_points--;
	std::cout << "Energy: " <<
		energy_points << std::endl;;
}
void ClapTrap::takeDamage(unsigned int amount) {
	this->hitpoints -= amount;
	std::cout << "Hitpoints: " <<
		hitpoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->hitpoints += amount;
	std::cout << "Hitpoints: " <<
		hitpoints << std::endl;
}