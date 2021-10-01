#ifndef MATERIA_HPP
#define MATERIA_HPP

#include "Headers.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string	type;
public:
	AMateria();
	virtual ~AMateria() {}
	AMateria(const AMateria& c_name);
	AMateria&	operator=(const AMateria& c_name);

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

class	Ice: public AMateria
{
private:
	std::string	_name;
public:
	Ice();
	virtual ~Ice() {}
	Ice(const Ice& c_name);
	Ice&	operator=(const Ice& c_name);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

class	Cure: public AMateria
{
private:
	std::string	_name;
public:
	Cure();
	virtual ~Cure() {}
	Cure(const Cure& c_name);
	Cure&	operator=(const Cure& c_name);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif