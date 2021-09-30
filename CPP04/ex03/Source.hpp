#ifndef SOURCE_HPP
#define SOURCE_HPP

#include <iostream>
#include "Materia.hpp"

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
	//std::string	_name;
	//std::string	_inventory[4];
public:
	std::string	_inventory[4];
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource(const MateriaSource& c_name);
	MateriaSource& operator=(const MateriaSource& c_name);

	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};

#endif