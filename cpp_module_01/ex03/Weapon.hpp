#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Weapon {
private:
	std::string type;
public:
	Weapon(std::string type_) : type(type_) {}
	~Weapon() {}
	const std::string& getType(void) {return this->type; }
	void setType(std::string type) {this->type = type; }
};

#endif