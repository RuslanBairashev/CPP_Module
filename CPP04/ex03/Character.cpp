#include "Character.hpp"

Character::Character(std::string name)
{
	this->_name = name;
	std::string* _inventory = new std::string[4];
	std::cout << "Character class constructor called" << _inventory << std::endl;
}

Character::~Character()
{
	//delete _inventory;
	std::cout << "Character class destructor called" << std::endl;
}

Character::Character(const Character& c_name)
{
	_name = c_name._name;
	std::string* _inventory = new std::string[4];
	for(short ii = 0; ii < 4; ii++)
		_inventory[ii] = c_name._inventory[ii];
	std::cout << "Character class copy constructor called" << std::endl;
}

Character&	Character::operator=(const Character& c_name)
{
	std::cout << "Character class \"=\" assignation called" << std::endl;
	if (this == &c_name)
		return *this;
	//delete _inventory;
	std::string* _inventory = new std::string[4];
	for(short ii = 0; ii < 4; ii++)
		_inventory[ii] = c_name._inventory[ii];
	return *this;
}

std::string const & Character::getName() const { return _name; }

void Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		if (_inventory[i].empty())
		{
			_inventory[i] = m->getType();
			break;
		}
	}
}
void Character::unequip(int idx)
{
	if (!(_inventory[idx].empty()))
		_inventory[idx].clear();
}
void Character::use(int idx, ICharacter& target)
{
	if (!(_inventory[idx].empty()))
	{
		//Ice::use;
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	}
}
