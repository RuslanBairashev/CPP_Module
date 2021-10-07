#include "Karen.hpp"

void	Karen::debug( void )
{
	std::cout << "Debug funcion OK." <<std::endl;
}

void	Karen::info( void )
{
	std::cout << "Info funcion OK." <<std::endl;
}
void	Karen::warning( void )
{
	std::cout << "Warning funcion OK." <<std::endl;
}
void	Karen::error( void )
{
	std::cout << "Error funcion OK." <<std::endl;
}
void	Karen::complain( std::string level )
{
	void		(Karen::* fu_ptr[])( void ) = \
	{ &Karen::debug, &Karen::info , &Karen::warning , &Karen::error };
	std::string	arr_levels[] = { "debug", "info" , "warning" , "error" };
	for(int i = 0; i < 4; i++)
	{
		if (level == arr_levels[i])
		{
			(this->*(fu_ptr[i]))();
			break;
		}
	}
}