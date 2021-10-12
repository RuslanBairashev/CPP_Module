#ifndef MATERIA_HPP
#define MATERIA_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class	Ice: public AMateria
{
private:
	std::string	_name;
public:
	Ice();
	virtual ~Ice();
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
	virtual ~Cure();
	Cure(const Cure& c_name);
	Cure&	operator=(const Cure& c_name);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif