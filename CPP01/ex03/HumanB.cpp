#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB (std::string str) : _name(str)
{
	_typeW = NULL;
}

void	HumanB::setWeapon(Weapon& c_name)
{
	_typeW = &c_name;
}

void	HumanB::attack ()
{
	std::cout << _name << " attacks with his " << _typeW->getType() << std::endl;
}

