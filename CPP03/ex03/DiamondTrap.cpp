#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : \
ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	_name = name;
	std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& c_name) : \
ClapTrap(c_name), FragTrap(c_name), ScavTrap(c_name)
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

void	DiamondTrap::whoAmI()
{
	std::cout << "Private name is " << _name << " . Protected name is " << ClapTrap::_name << std::endl;
}