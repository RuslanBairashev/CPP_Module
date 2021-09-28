#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(const FragTrap& c_name);
	FragTrap& operator=(const FragTrap& other);

	void	attack(std::string const & target);
	void	highFivesGuys();
};

#endif
