#ifndef ANIMALS_HPP
#define ANIMALS_HPP

#include <iostream>

// Animal class
class	Animal
{
protected:
	std::string	type;

public:
	Animal();
	//~Animal();
	virtual ~Animal();
	Animal(const Animal& c_name);
	Animal&	operator=(const Animal& c_name);

	virtual void	makeSound() const;
	std::string	getType() const;
};

// Cat class
class	Cat : public Animal
{
public:
	Cat();
	~Cat();

	virtual void	makeSound() const;
};

// Dog class
class	Dog : public Animal
{
public:
	Dog();
	~Dog();

	virtual void	makeSound() const;
};

#endif