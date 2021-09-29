#ifndef ANIMALS_HPP
#define ANIMALS_HPP

#include <iostream>
#include "Brain.hpp"

// Animal class
class	Animal
{
protected:
	std::string	type;

public:
	Animal();
	virtual ~Animal();
	Animal(const Animal& c_name);
	virtual Animal&	operator=(const Animal& c_name);

	virtual void	makeSound() const;
	std::string	getType() const;
};

// Cat class
class	Cat : public Animal
{
public:
	Cat();
	virtual ~Cat();
	Cat(const Cat& c_name);
	virtual Cat&	operator=(const Cat& c_name);

	virtual void	makeSound() const;

private:
	Brain*	_brain;
};

// Dog class
class	Dog : public Animal
{
public:
	Dog();
	virtual ~Dog();
	Dog(const Dog& c_name);
	virtual Dog&	operator=(const Dog& c_name);

	virtual void	makeSound() const;

private:
	Brain*	_brain;
};

#endif