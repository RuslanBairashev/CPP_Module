#ifndef SOURCE_HPP
#define SOURCE_HPP

#include "AMateria.hpp"
#include "ISource.hpp"
#include "Materia.hpp"

class	MateriaSource: public IMateriaSource
{
private:
	AMateria*	_inventory[4];
public:
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource(const MateriaSource& c_name);
	MateriaSource& operator=(const MateriaSource& c_name);

	virtual void		learnMateria(AMateria*);
	virtual AMateria*	createMateria(std::string const & type);
};

#endif