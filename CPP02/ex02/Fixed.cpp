#include "Fixed.hpp"

Fixed::Fixed()
{
	_raw = 0;
}

Fixed::Fixed(const int b)
{
	_raw = b * (1 << frc);
}

Fixed::Fixed(const float c)
{
	_raw = roundf(c * (1 << frc));
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed& name)
{
	*this = name;
}

Fixed& Fixed::operator=(const Fixed& other)
{
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

bool	Fixed::operator<(const Fixed b) const {return _raw < b._raw;}
bool	Fixed::operator>(const Fixed b) const {return _raw > b._raw;}
bool	Fixed::operator<=(const Fixed b) const {return _raw <= b._raw;}
bool	Fixed::operator>=(const Fixed b) const {return _raw >= b._raw;}
bool	Fixed::operator==(const Fixed b) const {return _raw == b._raw;}
bool	Fixed::operator!=(const Fixed b) const {return _raw != b._raw;}

Fixed	Fixed::operator+(const Fixed& other)
{
	Fixed res;
	res = (this->toFloat() + other.toFloat());
	return res; 
}

Fixed	Fixed::operator-(const Fixed& other)
{
	Fixed res;
	res = (this->toFloat() - other.toFloat());
	return res; 
}

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

Fixed&	Fixed::operator++()
{
	_raw++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;
	++*this;
	return temp;
}

Fixed&	Fixed::operator--()
{
	_raw--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;
	--*this;
	return temp;
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	return a < b ? a : b;
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	return a < b ? a : b;
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	return a > b ? a : b;
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	return a > b ? a : b;
}

std::ostream& operator<<(std::ostream& os, const Fixed& c_name)
{
	os << c_name.toFloat();
	return os;
}