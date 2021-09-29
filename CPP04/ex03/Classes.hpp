#ifndef CLASSES_HPP
#define CLASSES_HPP

#include <iostream>
#include "Amateria.hpp"

class	Character: ICharacter
{
private:
	std::string	_name;
public:
	Character(/* args */);
	virtual ~Character();
};

class	Ice: public AMateria
{
private:
	std::string	_name;
public:
	Ice(/* args */);
	virtual ~Ice();
};

class	Cure: public AMateria
{
private:
	std::string	_name;
public:
	Cure(/* args */);
	virtual ~Cure();
};

class	MateriaSource: IMateriaSource
{
private:
	std::string	_name;
public:
	MateriaSource(/* args */);
	virtual ~MateriaSource();
};

#endif
