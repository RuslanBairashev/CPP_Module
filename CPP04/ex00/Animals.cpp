#include "Animals.hpp"

// ***** Animal class methods ***** //
Animal::Animal()
{
	this->type = "Noname";
	std::cout << "Animal class constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal class destructor called" << std::endl;
}

Animal::Animal(const Animal& c_name)
{
	*this = c_name;
}

Animal&	Animal::operator=(const Animal& c_name)
{
	if (this == &c_name)
		return *this;
	this->type = c_name.type;
	return *this;
}

void	Animal::makeSound() const
{
	std::cout << "\"No sound!\"";
}

std::string	Animal::getType() const { return type; }

// ***** Cat class methods ***** //
Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "Cat class constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat class destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "\"Meow!\"";
}

// ***** Dog class methods ***** //
Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << "Dog class constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog class destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "\"Gaww!\"";
}