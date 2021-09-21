#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string str, Weapon& type);

	void	attack();

private:
	std::string	_name;
	Weapon		_typeW;
};

#endif
