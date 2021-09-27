#include "Fixed.hpp"

Fixed::Fixed()
{
	_raw = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int b)
{
	_raw = b * (1 << frc);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float c)
{
	_raw = roundf(c * (1 << frc));
	std::cout << "Float constructor called" << std::endl;
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
	return this->_raw;
}

void Fixed::setRawBits( int raw )
{
	this->_raw = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float) _raw / (1 << frc));
}
	
int Fixed::toInt( void ) const
{
	return (_raw >> frc);
}

bool	Fixed::operator<(const Fixed b) {return _raw < b._raw;}
bool	Fixed::operator>(const Fixed b) {return _raw < b._raw;}
bool	Fixed::operator<=(const Fixed b) {return _raw < b._raw;}
bool	Fixed::operator>=(const Fixed b) {return _raw < b._raw;}
bool	Fixed::operator==(const Fixed b) {return _raw == b._raw;}
bool	Fixed::operator!=(const Fixed b) {return _raw != b._raw;}

Fixed&	Fixed::operator+(const Fixed& other) { _raw += other._raw; return *this; }
Fixed&	Fixed::operator-(const Fixed& other) { _raw -= other._raw; return *this; }
Fixed	Fixed::operator*(const Fixed& other)
{
	Fixed res;
	res = (this->toFloat() * other.toFloat());
	return res; 
}
Fixed	Fixed::operator/(const Fixed& other)
{
	Fixed res;
	res = (this->toFloat() / other.toFloat());
	return res; 
}


std::ostream& operator<<(std::ostream& os, const Fixed& c_name)
{
	os << c_name.toFloat();
	return os;
}