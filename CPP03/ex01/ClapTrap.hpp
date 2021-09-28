#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string	_name;
	unsigned	_hitpoints;
	unsigned	_energy_points;
	unsigned	_attack_damage;
public:
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap& c_name);
	ClapTrap& operator=(const ClapTrap& other);

	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};




#endif

