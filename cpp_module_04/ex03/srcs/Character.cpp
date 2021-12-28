#include "../includes/Character.hpp"

Character::Character() :
	name("nameless") {
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	std::cout << "CHARACTER: default constructor for "
		<< name << std::endl;
}

Character::Character(std::string const& _name) :
	name (_name) {
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
	for (int i = 0; i < 4; i++)
		this->inventory[i] = obj.inventory[i];
	std::cout << "CHARACTER: operator= for "
		<< name << std::endl;
	return *this;
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		if (inventory[i] != NULL)
			delete this->inventory[i];
		else
			continue;
	std::cout << "CHARACTER: Destructor for "
		<< name << std::endl;
}

std::string const& Character::getName() const {
	return this->name;
}

void Character::equip(AMateria* _materia) {
	int i = 0;
	if (_materia == NULL)
		return;
	for (int i = 0; i < 4; i++)
		if (this->inventory[i] == NULL) {
			inventory[i] = _materia->clone();
			delete _materia;
			_materia = nullptr;
			std::cout << this->name << " put " << inventory[i]->getType()
			<< " in " << i << " slot\n";
			return;
		}
	delete _materia;
	_materia = NULL;
	std::cout << "ERROR EQUIP: full inventory\n";
}

void Character::unequip(int index) {
	if (this->inventory[index] != NULL) {
		delete inventory[index];
		this->inventory[index] = NULL;
		std::cout << "unequip " << index << " slot\n";
	}
	else
		std::cout << "ERROR UNEQUIP: empty slot\n";
}

void Character::use(int index, ICharacter& target) {
	if (index < 0 || index > 3)
		std::cout << "ERROR USE: no such slot\n";
	if (this->inventory[index] == NULL)
		std::cout << "ERROR USE: empty slot\n";
	else {
		this->inventory[index]->use(target);
		delete inventory[index];
		inventory[index] = nullptr;
	}
}
