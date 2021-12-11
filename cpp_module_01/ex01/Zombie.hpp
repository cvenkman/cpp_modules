#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Zombie {
private:
	std::string name;
public:
	Zombie(std::string name_ = "unknown");
	~Zombie();
	void setName(std::string name) {this->name = name; }
	void announce(void);
	static Zombie* zombieHorde(int N, std::string name);
};

#endif