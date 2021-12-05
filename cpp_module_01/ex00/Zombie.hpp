#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Zombie {
private:
	std::string name;
public:
	Zombie(std::string name = "unknown");
	~Zombie();
	void announce(void);
	static Zombie* newZombie(std::string name);
};

void randomChump(std::string name);

#endif