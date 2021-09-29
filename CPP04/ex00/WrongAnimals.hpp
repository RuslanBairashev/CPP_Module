#ifndef WRONGWrongAnimalS_HPP
#define WRONGWrongAnimalS_HPP

#include <iostream>

// WrongAnimal class
class	WrongAnimal
{
protected:
	std::string	type;

public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(const WrongAnimal& c_name);
	WrongAnimal&	operator=(const WrongAnimal& c_name);

	void	makeSound() const;
	std::string	getType() const;
};

// WrongCat class
class	WrongCat : public WrongAnimal
{
public:
	WrongCat();
	~WrongCat();

	void	makeSound() const;
};

// WrongDog class
class	WrongDog : public WrongAnimal
{
public:
	WrongDog();
	~WrongDog();

	void	makeSound() const;
};

#endif