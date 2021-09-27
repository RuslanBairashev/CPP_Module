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
	~Fixed();
	Fixed(const int b); //int constructor
	Fixed(const float b); //float constructor
	Fixed(const Fixed& name); //copy constructor
	Fixed&	operator=(const Fixed& other); //assignation operator
	Fixed&	operator+(const Fixed& other);
	Fixed&	operator-(const Fixed& other);
	Fixed	operator*(const Fixed& other);
	Fixed	operator/(const Fixed& other);
	bool	operator<(const Fixed b);
	bool	operator>(const Fixed b);
	bool	operator<=(const Fixed b);
	bool	operator>=(const Fixed b);
	bool	operator==(const Fixed b);
	bool	operator!=(const Fixed b);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

private:
	int					_raw;
	static const int	frc = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& c_name);

#endif
