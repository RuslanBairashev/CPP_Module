#include "Fixed.hpp"

Fixed::Fixed()
{
	_raw = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& name)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = name;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &other)
		return *this;
	this->_raw = other.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const 
{ 
	std::cout << "getRawBits member function called" << std::endl;
	return this->_raw;
}

void Fixed::setRawBits( int raw ) { this->_raw = raw; }
