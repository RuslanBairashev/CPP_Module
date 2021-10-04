#ifndef SOURCE_HPP
#define SOURCE_HPP

#include "Headers.hpp"

class AMateria;

class IMateriaSource //const
{
	public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria* m) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

class	MateriaSource: public IMateriaSource
{
private:
	AMateria*	_inventory[4];
public:
	MateriaSource();
	virtual ~MateriaSource()
	{
		for(int i = 0; i < 4; i++)
		{
			if(_inventory[i])
				delete _inventory[i];
		}
	}
	//virtual ~MateriaSource() {}
	MateriaSource(const MateriaSource& c_name);
	MateriaSource& operator=(const MateriaSource& c_name);

	virtual void		learnMateria(AMateria*);
	virtual AMateria*	createMateria(std::string const & type);
};

#endif