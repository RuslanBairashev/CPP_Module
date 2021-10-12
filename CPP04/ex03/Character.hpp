#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Character: public ICharacter
{
private:
	std::string	_name;
	AMateria*	_inventory[4];
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
