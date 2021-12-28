#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		this->studied_materia[i] = NULL;
	std::cout << "MATERIASOURCE: default constructor\n";
}

MateriaSource::MateriaSource(const MateriaSource& obj) {
	for (int i = 0; i < 4; i++)
		this->studied_materia[i] = NULL;
	*this = obj;
	std::cout << "MATERIASOURCE: copy constructor\n";
}

MateriaSource& MateriaSource::operator= (const MateriaSource& obj) {
	for (int i = 0; i < 4; i++)
		if (this->studied_materia[i] != NULL) {
			delete this->studied_materia[i];
			this->studied_materia[i] = NULL;
		}
	for (int i = 0; i < 4; i++)
		this->studied_materia[i] = obj.studied_materia[i];
	std::cout << "MATERIASOURCE: operator=\n";
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4 && studied_materia[i] != NULL; i++)
		delete this->studied_materia[i];
	std::cout << "MATERIASOURCE: destructor\n";
}

void MateriaSource::learnMateria(AMateria* _materia) {
	for (int i = 0; i < 4; i++)
		if (this->studied_materia[i] == NULL) {
			studied_materia[i] = _materia;
			std::cout << "learn materia " << studied_materia[i]->getType()
			<< "[ " << i << " ] slot\n";
			return;
		}
	std::cout << "no place to add materia\n"; 
	delete _materia;
}

AMateria* MateriaSource::createMateria(std::string const& type) {
	for (int i = 0; i < 4 && studied_materia[i] != NULL; i++)
		if (studied_materia[i]->getType() == type)
			return studied_materia[i]->clone();
	std::cout << "unknown materia\n";
	return NULL;
}
