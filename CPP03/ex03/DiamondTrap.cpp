#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : \
ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	
	_hitpoints = FragTrap::_hitpoints;
	//_energy_points = 700;
	//std::cout << "*********" << ScavTrap::_energy_points << std::endl;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
	std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& c_name) : \
ClapTrap(c_name), ScavTrap(c_name), FragTrap(c_name) 
{
	this->_name = c_name._name;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this == &other)
		return *this;
	this->_name = other._name;
	return *this;
}

void	DiamondTrap::attack(std::string const & target)
{
	std::cout << "DiamondTrap " << this->_name << " attack " << target;
	std::cout << ", causing " << this->_attack_damage << " points of damage!";
	std::cout << std::endl;
}

void	DiamondTrap::highFivesGuys()
{
	std::cout << "Display positive high five request." << std::endl;
}
