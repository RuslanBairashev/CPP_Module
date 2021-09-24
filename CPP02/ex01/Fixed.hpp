#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cctype>
#include <cstring>
#include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed& name); //copy constructor
	Fixed& operator=(const Fixed&); //assignation operator
	Fixed(const int b); //int constructor
	Fixed(const float b); //float constructor
	~Fixed();
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	//float toFloat( void ) const;
	//int toInt( void ) const;

private:
	int	_raw;
	static const int	frc = 8;
};

#endif
