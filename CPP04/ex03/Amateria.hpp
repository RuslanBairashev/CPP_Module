#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

// AMateria class
class AMateria
{
protected:
	const std::string	type;
public:
	AMateria(std::string const & type);
	virtual ~AMateria() {}
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

// ICharacter class
class ICharacter
{
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

// IMateriaSource class
class IMateriaSource
{
	public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif