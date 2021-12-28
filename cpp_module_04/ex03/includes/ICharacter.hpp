#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "AMateria.hpp"

class AMateria;

class ICharacter {
public:
	virtual ~ICharacter() {}
	virtual std::string const& getName() const = 0;
	virtual void equip(AMateria* _materia) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int index, ICharacter& target) = 0;
};

#endif
