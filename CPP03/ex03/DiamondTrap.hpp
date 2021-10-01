#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : virtual public FragTrap, virtual public ScavTrap
{
private:
	std::string	_name;
public:
	DiamondTrap(std::string name);
	~DiamondTrap();
	DiamondTrap(const DiamondTrap& c_name);
	DiamondTrap& operator=(const DiamondTrap& other);

	void	whoAmI();
	std::string	getName() { return _name; }
	unsigned	getHP() { return _hitpoints; }
	unsigned	getEP() { return _energy_points; }
	unsigned	getAD() { return _attack_damage; }
};

#endif
