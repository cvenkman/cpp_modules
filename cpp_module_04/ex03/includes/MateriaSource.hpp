#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
private:
	AMateria *studied_materia[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource& obj);
	MateriaSource& operator= (const MateriaSource& obj);
	~MateriaSource();
	void learnMateria(AMateria* _materia);
	AMateria* createMateria(std::string const & type);
};

#endif
