#include "Materia.hpp"

AMateria::AMateria()
{
	this->type = "";
}

AMateria::AMateria(const AMateria& c_name)
{
	type = c_name.type;
}

AMateria&	AMateria::operator=(const AMateria& c_name)
{
	if (this == &c_name)
		return *this;
	type = c_name.type;
	return *this;
}

std::string const & AMateria::getType() const { return type; }

void AMateria::use(ICharacter& target)
{
	std::cout  << target.getName() << " use method called" << std::endl;
}

Ice::Ice() : AMateria()
{
	this->type = "ice";
}

Ice::Ice(const Ice& c_name)
{
	type = c_name.type;
}

Ice&	Ice::operator=(const Ice& c_name)
{
	if (this == &c_name)
		return *this;
	type = c_name.type;
	return *this;
}

AMateria* Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Cure::Cure() : AMateria()
{
	this->type = "cure";
}

Cure::Cure(const Cure& c_name)
{
	type = c_name.type;
}

Cure&	Cure::operator=(const Cure& c_name)
{
	if (this == &c_name)
		return *this;
	type = c_name.type;
	return *this;
}

AMateria* Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	
}
