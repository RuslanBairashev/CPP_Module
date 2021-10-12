#include "Source.hpp"

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	std::cout << "1_MateriaSource class constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; i++)
	{
		if(_inventory[i])
			delete _inventory[i];
	}
	std::cout << "1_MateriaSource class destructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& c_name)
{
	for(short ii = 0; ii < 4; ii++)
		_inventory[ii] = c_name._inventory[ii];
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& c_name)
{
	if (this == &c_name)
		return *this;
	for(short ii = 0; ii < 4; ii++)
		_inventory[ii] = c_name._inventory[ii];
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
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

AMateria* MateriaSource::createMateria(std::string const & type)
{
	AMateria*	ret = NULL;
	for(int i = 0; i < 4; i++)
	{
		if (type == "ice")
			ret = new Ice();
		else if (type == "cure")
			ret = new Cure();
		return ret;
	}
	return ret;
}
