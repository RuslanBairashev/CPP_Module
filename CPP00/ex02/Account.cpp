#include <iostream>
#include <ctime>
#include "Account.hpp"

int	Account::getNbAccounts( void )
{
	std::cout << "test" << std::endl;
	return (0);
}
int	Account::getTotalAmount( void )
{
	std::cout << "test" << std::endl;
	return (0);
}
int	Account::getNbDeposits( void )
{
	std::cout << "test" << std::endl;
	return (0);
}
int	Account::getNbWithdrawals( void )
{
	std::cout << "test" << std::endl;
	return (0);
}
void	Account::displayAccountsInfos( void )
{
	std::cout << "test" << std::endl;
}

Account::Account( int initial_deposit )
{
		Account::_displayTimestamp();
		std::cout << initial_deposit << std::endl;
}
Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "test destruct" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	std::cout << deposit << std::endl;
	
}
bool	Account::makeWithdrawal( int withdrawal )
{
	std::cout << withdrawal << std::endl;
	return (true);
}
int		Account::checkAmount( void ) const
{
	std::cout << "test" << std::endl;
	return (0);
}
void	Account::displayStatus( void ) const
{
	std::cout << "test" << std::endl;
}

void	Account::_displayTimestamp( void )
{
	char	buf[16];
	time_t	now = std::time(NULL);

	strftime(buf, sizeof buf, "%Y%m%d_%H%M%S", std::localtime(&now));
	std::cout << "[" << buf << "] ";
}

Account::Account( void )
{
	for(int i = 0; i < 8; i++)
	{
		Account::_displayTimestamp();
		std::cout << i << std::endl;
	}
}