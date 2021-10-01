#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_energy_points = 50;
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& c_name) : ClapTrap(c_name)
{
	this->_name = c_name._name;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this == &other)
		return *this;
	this->_name = other._name;
	return *this;
}

void	ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << this->_name << " attack " << target;
	std::cout << ", causing " << this->_attack_damage << " points of damage!";
	std::cout << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
}
