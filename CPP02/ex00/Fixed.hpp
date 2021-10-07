#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed& name); //copy constructor
	Fixed& operator=(const Fixed& other); //assignation operator
	~Fixed();

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

private:
	int					_raw;
	static const int	frc = 8;
};

#endif
