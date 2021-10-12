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
	virtual	~WrongAnimal();
	WrongAnimal(const WrongAnimal& c_name);
	WrongAnimal&	operator=(const WrongAnimal& c_name);

	void		makeSound() const;
	std::string	getType() const;
};

// WrongCat class
class	WrongCat : public WrongAnimal
{
public:
	WrongCat();
	virtual ~WrongCat();
	WrongCat(const WrongCat& c_name);
	WrongCat&	operator=(const WrongCat& c_name);

	void	makeSound() const;
};

// WrongDog class
class	WrongDog : public WrongAnimal
{
public:
	WrongDog();
	virtual ~WrongDog();
	WrongDog(const WrongDog& c_name);
	WrongDog&	operator=(const WrongDog& c_name);

	void	makeSound() const;
};

#endif