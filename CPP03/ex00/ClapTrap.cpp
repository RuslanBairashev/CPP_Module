#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	_hitpoints = 10;
	_energy_points = 10;
	_attack_damage = 0;
	_name = name;
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& c_name)
{
	this->_name = c_name._name;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this == &other)
		return *this;
	this->_name = other._name;
	return *this;
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_name << " attack " << target;
	std::cout << ", causing " << this->_attack_damage << " points of damage!";
	std::cout << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount < this->_hitpoints)
	{
		this->_hitpoints -= amount;
		std::cout << "ClapTrap " << this->_name << " lose " << amount;
		std::cout << " HP! " << this->_hitpoints << " HP left!" << std::endl;
	}
	else
	{
		this->_hitpoints = 0;
		std::cout << "ClapTrap " << this->_name << " died!" << std::endl;
	}
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitpoints += amount;
	std::cout << "ClapTrap " << this->_name << " repair " << amount;
	std::cout << " HP! " << this->_hitpoints << " HP left!" << std::endl;
	std::cout << this->_energy_points << " EP left!" << std::endl;

}