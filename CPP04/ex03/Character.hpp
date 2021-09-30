#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "Materia.hpp"

class ICharacter //const
{
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

class	Character: public ICharacter
{
private:
	std::string	_name;
	std::string	_inventory[4];
public:
	Character(std::string name);
	virtual ~Character();
	Character(const Character& c_name);
	Character& operator=(const Character& c_name);

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif
