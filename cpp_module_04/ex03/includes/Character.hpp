#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
private:
	std::string name;
	AMateria* inventory[4];
	unsigned short int inventory_num;

public:
	Character();
	Character(std::string const& _name);
	Character(const Character& obj);
	Character& operator= (const Character& obj);
	~Character();
	std::string const& getName() const;
	void equip(AMateria* _materia);
	// void unequip(int idx);
	void use(int index, ICharacter& target);
};
#endif