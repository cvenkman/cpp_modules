#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
public:
	Brain();
	Brain(const Brain &obj);
	~Brain();
	Brain& operator= (const Brain& obj);
	std::string getIdea(int index) const;
	void setIdea(std::string idea, int index);

private:
	std::string ideas[100];
};

#endif