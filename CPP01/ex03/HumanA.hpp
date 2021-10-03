#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA //reference
{
public:
	HumanA(std::string str, Weapon& type);
	void	attack();
	//Weapon&		_typeW;

private:
	std::string	_name;
	Weapon&		_typeW;
};

#endif
