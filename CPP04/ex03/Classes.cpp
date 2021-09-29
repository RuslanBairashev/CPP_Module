#include "Classes.hpp"

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
	_brain = new Brain();
	std::cout << "Cat class constructor called" << std::endl;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat class destructor called" << std::endl;
}

Cat::Cat(const Cat& c_name)
{
	if (c_name._brain)
	{
		_brain = new Brain();
		*_brain = *c_name._brain;
	}
	else
		_brain = NULL;
	std::cout << "Cat class copy constructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& c_name)
{
	std::cout << "Cat class \"=\" assignation called" << std::endl;
	if (this == &c_name)
		return *this;
	delete _brain;
	if (c_name._brain)
	{
		_brain = new Brain();
		*_brain = *c_name._brain;
	}
	else
		_brain = NULL;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "\"Meow!\"";
}

// ***** Dog class methods ***** //
Dog::Dog() : Animal()
{
	this->type = "Dog";
	_brain = new Brain();
	std::cout << "Dog class constructor called" << std::endl;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog class destructor called" << std::endl;
}

Dog::Dog(const Dog& c_name)
{
	if (c_name._brain)
	{
		_brain = new Brain();
		*_brain = *c_name._brain;
	}
	else
		_brain = NULL;
	std::cout << "Dog class copy constructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& c_name)
{
	std::cout << "Dog class \"=\" assignation called" << std::endl;
	if (this == &c_name)
		return *this;
	delete _brain;
	if (c_name._brain)
	{
		_brain = new Brain();
		*_brain = *c_name._brain;
	}
	else
		_brain = NULL;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "\"Gaww!\"";
}