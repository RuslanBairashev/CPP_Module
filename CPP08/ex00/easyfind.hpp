#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <list>

class NoMatch: public std::exception
{
	public:
		const char* what() const throw()
		{
			return "easyfind::NoMatch";
		}
};

template<typename T>
int	easyfind(T cont, int n)
{
	typename T::const_iterator	it;
	/*for (it = cont.begin(); it != cont.end(); ++it)
	{
		if (*it == n)
			std::cout << "found one\n";
	}*/
	it = std::find(cont.begin(), cont.end(), n);
	/*if (it != cont.end())
		std::cout << "found one: " << &it << std::endl;
	else 
		std::cout << "Error: not found\n";*/
	if (it == cont.end())
		throw NoMatch();
	return *it;
}

#endif