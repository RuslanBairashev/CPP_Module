#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
public:
	Weapon(std::string str);

	void			setType(std::string str){ _type = str; }
	std::string&	getType() { return _type; }

private:
	std::string	_type;
};

#endif
