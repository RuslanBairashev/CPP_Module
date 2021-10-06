#ifndef ISOURCE_HPP
#define ISOURCE_HPP

#include <iostream>

class AMateria;

class IMateriaSource //const
{
	public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria* m) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif