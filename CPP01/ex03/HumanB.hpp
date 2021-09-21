#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string str);
	void	setWeapon(Weapon type);

	void	attack();

private:
	std::string	_name;
	Weapon*		_typeW;
};

#endif
