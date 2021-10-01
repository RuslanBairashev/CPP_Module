#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& c_name) : ClapTrap(c_name)
{
	this->_name = c_name._name;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this == &other)
		return *this;
	this->_name = other._name;
	return *this;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "Display positive high five request." << std::endl;
}
