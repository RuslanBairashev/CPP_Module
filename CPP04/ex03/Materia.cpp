#include "Materia.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria class constructor called" << std::endl;
}
/*
AMateria::AMateria(std::string const & type)
{
	this->type = type;
	std::cout << "AMateria class constructor called" << std::endl;
}
*/
AMateria::~AMateria()
{
	std::cout << "AMateria class destructor called" << std::endl;
}

AMateria::AMateria(const AMateria& c_name)
{
	type = c_name.type;
	std::cout << "AMateria class copy constructor called" << std::endl;
}

AMateria&	AMateria::operator=(const AMateria& c_name)
{
	std::cout << "AMateria class \"=\" assignation called" << std::endl;
	if (this == &c_name)
		return *this;
	type = c_name.type;
	return *this;
}

std::string const & AMateria::getType() const { return type; }

void AMateria::use(ICharacter& target)
{
	std::cout << this->getType() << " use method called\n";
}

Ice::Ice() : AMateria()
{
	this->type = "ice";
	std::cout << "AMateria class constructor called" << std::endl;
}

AMateria* Ice::clone() const
{
	//Ice	tmp;
	//AMateria* clone = &tmp;
	AMateria* clone = NULL;
	return clone;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at ";
}
