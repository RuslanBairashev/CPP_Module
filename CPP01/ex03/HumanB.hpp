#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB //pointer
{
public:
	HumanB(std::string str);
	void	setWeapon(Weapon *c_name);
	Weapon*		_typeW;
	void	attack();

private:
	std::string	_name;
	
};

#endif
