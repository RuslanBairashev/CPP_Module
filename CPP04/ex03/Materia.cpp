#include "Materia.hpp"

AMateria::AMateria()
{
	this->type = "";
	//std::cout << "AMateria class constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
	//std::cout << "AMateria class constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& c_name)
{
	type = c_name.type;
	//std::cout << "AMateria class constructor called" << std::endl;
}

AMateria&	AMateria::operator=(const AMateria& c_name)
{
	//std::cout << "AMateria class constructor called" << std::endl;
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
	std::cout << "2_Ice class constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "2_Ice class destructor called" << std::endl;
}

Ice::Ice(const Ice& c_name)
{
	type = c_name.type;
	std::cout << "Ice class destructor called" << std::endl;
}

Ice&	Ice::operator=(const Ice& c_name)
{
	std::cout << "Ice class destructor called" << std::endl;
	if (this == &c_name)
		return *this;
	type = c_name.type;
	return *this;
}

AMateria* Ice::clone() const
{
	std::cout << "Ice class destructor called" << std::endl;
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Cure::Cure() : AMateria()
{
	this->type = "cure";
	std::cout << "3_Cure class constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "3_Cure class destructor called" << std::endl;
}

Cure::Cure(const Cure& c_name)
{
	type = c_name.type;
}

Cure&	Cure::operator=(const Cure& c_name)
{
	std::cout << "Cure class constructor called" << std::endl;
	if (this == &c_name)
		return *this;
	type = c_name.type;
	return *this;
}

AMateria* Cure::clone() const
{
	std::cout << "Cure class constructor called" << std::endl;
	return new Cure();
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
