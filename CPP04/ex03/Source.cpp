#include "Source.hpp"

MateriaSource::MateriaSource()
{
	std::string* _inventory = new std::string[4];
	std::cout << "MateriaSource class constructor called" << _inventory << std::endl;
}

MateriaSource::~MateriaSource()
{
	//delete _inventory;
	std::cout << "MateriaSource class destructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& c_name)
{
	std::string* _inventory = new std::string[4];
	for(short ii = 0; ii < 4; ii++)
		_inventory[ii] = c_name._inventory[ii];
	std::cout << "MateriaSource class copy constructor called" << std::endl;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& c_name)
{
	std::cout << "MateriaSource class \"=\" assignation called" << std::endl;
	if (this == &c_name)
		return *this;
	//delete _inventory;
	std::string* _inventory = new std::string[4];
	for(short ii = 0; ii < 4; ii++)
		_inventory[ii] = c_name._inventory[ii];
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
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
AMateria* MateriaSource::createMateria(std::string const & type)
{
	AMateria*	ret = 0;
	for(int i = 0; i < 4; i++)
	{
		if (_inventory[i] == type)
		{
			if (type == "ice")
				ret = new Ice();
			//else if (type == "cure")
			//	AMateria*	ret = new Cure();
			return ret;
		}
	}

	return ret;
}
