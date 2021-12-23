#include "../includes/Character.hpp"

Character::Character() :
	name("nameless"), inventory_num(0) {
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	std::cout << "CHARACTER: default constructor for "
		<< name << std::endl;
}

Character::Character(std::string const& _name) :
	name (_name), inventory_num(0) {
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	std::cout << "CHARACTER: constructor with name for "
		<< name << std::endl;
}

Character::Character(const Character& obj) :
	name(obj.name) {
	*this = obj;
	std::cout << "CHARACTER: copy constructor for "
		<< name << std::endl;
}

Character& Character::operator= (const Character& obj) {
	this->name = obj.name;
	std::cout << "CHARACTER: operator= for "
		<< name << std::endl;
	return *this;
}

Character::~Character() {
	std::cout << "CHARACTER: Destructor for "
		<< name << std::endl;
}

std::string const& Character::getName() const {
	return this->name;
}

void Character::equip(AMateria* _materia) {
	if (this->inventory_num < 5) {
		this->inventory[inventory_num] = _materia;
	// std::cout << _materia << std::endl;
	}
	// std::cout << this->inventory[inventory_num] << std::endl;
}

void Character::use(int index, ICharacter& target) {
	this->inventory[index]->use(target);
	// std::cout << this->inventory[index] << std::endl;
}