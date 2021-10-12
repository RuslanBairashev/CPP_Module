#include "WrongAnimals.hpp"

// ***** WrongAnimal class methods ***** //
WrongAnimal::WrongAnimal()
{
	this->type = "Noname";
	std::cout << "WrongAnimal class constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal class destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& c_name)
{
	*this = c_name;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& c_name)
{
	if (this == &c_name)
		return *this;
	this->type = c_name.type;
	return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "\"No sound!\"";
}

std::string	WrongAnimal::getType() const { return type; }

// ***** WrongCat class methods ***** //
WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "WrongCat class constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat class destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& c_name)
{
	*this = c_name;
}

WrongCat&	WrongCat::operator=(const WrongCat& c_name)
{
	if (this == &c_name)
		return *this;
	this->type = c_name.type;
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "\"Meow!\"";
}

// ***** WrongDog class methods ***** //
WrongDog::WrongDog() : WrongAnimal()
{
	this->type = "WrongDog";
	std::cout << "WrongDog class constructor called" << std::endl;
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog class destructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog& c_name)
{
	*this = c_name;
}

WrongDog&	WrongDog::operator=(const WrongDog& c_name)
{
	if (this == &c_name)
		return *this;
	this->type = c_name.type;
	return *this;
}

void	WrongDog::makeSound() const
{
	std::cout << "\"Gaww!\"";
}