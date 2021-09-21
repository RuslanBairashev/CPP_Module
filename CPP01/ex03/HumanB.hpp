#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string str);
	void	setWeapon(Weapon type);
	Weapon*		_typeW;
	void	attack();

private:
	std::string	_name;
	
};

#endif
