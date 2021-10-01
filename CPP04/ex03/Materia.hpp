#ifndef MATERIA_HPP
#define MATERIA_HPP

//#include <iostream>
//#include "Character.hpp"
#include "Headers.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string	type;
public:
	AMateria();
	//AMateria(std::string const & type);
	virtual ~AMateria();
	AMateria(const AMateria& c_name);
	AMateria&	operator=(const AMateria& c_name);

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	//virtual void use();
	virtual void use(ICharacter& target);
};

class	Ice: public AMateria
{
private:
	std::string	_name;
public:
	Ice();
	//virtual ~Ice();
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

class	Cure: public AMateria
{
private:
	std::string	_name;
public:
	Cure(/* args */);
	virtual ~Cure();
};

#endif