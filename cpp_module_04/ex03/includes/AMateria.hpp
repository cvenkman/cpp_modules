#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
protected:
	// AMateria(const AMateria& obj);
	// AMateria& operator= (const AMateria& obj);
	std::string type;
	AMateria(); // to protected
	AMateria(std::string const &_type);

public:
	virtual ~AMateria();
	std::string const &getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif