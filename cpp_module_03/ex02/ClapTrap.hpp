#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
public:
	ClapTrap();
	ClapTrap(std::string _name);
	ClapTrap(const ClapTrap &obj);
	~ClapTrap();
	ClapTrap& operator= (const ClapTrap& obj);
	std::string getName(void) const;
	void setName(std::string _name);

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

protected:
	ClapTrap(std::string _name, int _hitpoints,
		int _energy_points, int _attack_damage);
	std::string name;
	int hitpoints;
	int energy_points;
	int attack_damage;
};

#endif