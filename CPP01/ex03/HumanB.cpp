#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB (std::string str) : _name(str) {}

void	HumanB::setWeapon(Weapon type)
{
	_typeW = &type;
}

void	HumanB::attack ()
{
	std::cout << _name << " attacks with his " << _typeW->getType() << std::endl;
}

