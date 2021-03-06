#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(const ScavTrap& c_name);
	ScavTrap& operator=(const ScavTrap& other);

	void	attack(std::string const & target);
	void	guardGate();
};

#endif

