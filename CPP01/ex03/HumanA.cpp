#include "Weapon.hpp"
#include "HumanA.hpp"


HumanA::HumanA (std::string str, Weapon& type) : _name(str), _typeW(type) {}

void	HumanA::attack ()
{
	std::cout << _name << " attacks with his " << _typeW.getType() << std::endl;
}