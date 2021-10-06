#include "Character.hpp"

Character::Character(std::string name)
{
	this->_name = name;
	for(int i = 0; i < 4; i++)
		_inventory[i] = nullptr;
}

Character:: ~Character()
{
	for(int i = 0; i < 4; i++)
	{
		if(_inventory[i])
			delete _inventory[i];
	}
}

Character::Character(const Character& c_name)
{
	_name = c_name._name;
	for(short ii = 0; ii < 4; ii++)
		_inventory[ii] = c_name._inventory[ii];
}

Character&	Character::operator=(const Character& c_name)
{
	if (this == &c_name)
		return *this;
	for(short ii = 0; ii < 4; ii++)
		_inventory[ii] = c_name._inventory[ii];
	return *this;
}

std::string const & Character::getName() const { return _name; }

void Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			break;
		}
	}
}
void Character::unequip(int idx)
{
	if (!_inventory[idx])
		_inventory[idx] = nullptr;
}
void Character::use(int idx, ICharacter& target)
{
	_inventory[idx]->use(target);
}
