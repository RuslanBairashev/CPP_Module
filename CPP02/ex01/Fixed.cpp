#include "Fixed.hpp"

Fixed::Fixed()
{
	double	value = 1234.43f;
	double	to_int;

	to_int = static_cast<int>(value * 100000000);
	_raw = to_int;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int b)
{
	setRawBits( b );
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float c)
{
	_raw = c;
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& name)
{
	std::cout << "Copy constructor called" << std::endl;
	_raw = name.getRawBits();
}

Fixed& Fixed::operator=(const Fixed&)
{
	std::cout << "Assignation operator called" << std::endl;
	this->getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const 
{ 
	std::cout << "getRawBits member function called" << std::endl;
	return this->_raw;
}

void Fixed::setRawBits( int raw )
{
	this->_raw = raw << 8;
}
