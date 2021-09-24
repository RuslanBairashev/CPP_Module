#include "Karen.hpp"

enum	levels
	{
		NOT_DEFINED,
		DEBUG,
		INFO,
		WARNING,
		ERROR
	};

std::map<std::string, levels> map_levels;

void	Karen::initialize()
{
	map_levels["DEBUG"] = DEBUG;
	map_levels["INFO"] = INFO;
	map_levels["WARNING"] = WARNING;
	map_levels["ERROR"] = ERROR;
}

void	Karen::complain( std::string level )
{
	std::cout << "Input message: " << level <<std::endl;
	switch (map_levels[level])
	{
	case DEBUG:
		this->debug();
		std::cout << std::endl;
		break;
	case INFO:
		this->info();
		std::cout << std::endl;
		break;
	case WARNING:
		this->warning();
		std::cout << std::endl;
		break;
	case ERROR:
		this->error();
		std::cout << std::endl;
		break;
	default:
		std::cout << "No match" << std::endl;
		break;
	}
}

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