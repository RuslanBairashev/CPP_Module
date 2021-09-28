#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
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
	Fixed	operator+(const Fixed& other);
	Fixed	operator-(const Fixed& other);
	Fixed	operator*(const Fixed& other);
	Fixed	operator/(const Fixed& other);
	Fixed&	operator++(); //prefix
	Fixed	operator++(int); //postfix
	Fixed&	operator--(); //prefix
	Fixed	operator--(int); //postfix
	bool	operator<(const Fixed b) const;
	bool	operator>(const Fixed b) const;
	bool	operator<=(const Fixed b) const;
	bool	operator>=(const Fixed b) const;
	bool	operator==(const Fixed b) const;
	bool	operator!=(const Fixed b) const;
	static Fixed&	min(Fixed& a, Fixed& b);
	static const Fixed&	min(const Fixed& a, const Fixed& b);
	static Fixed&	max(Fixed& a, Fixed& b);
	static const Fixed&	max(const Fixed& a, const Fixed& b);
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

private:
	int					_raw;
	static const int	frc = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& c_name);

#endif
