#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
public:
	Cure();
	Cure(std::string const &_type);
	Cure(const Cure& obj);
	Cure& operator= (const Cure& obj);
	~Cure();
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif