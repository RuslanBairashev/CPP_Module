#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <map>

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

	it = std::find(cont.begin(), cont.end(), n);
	if (it == cont.end())
		throw NoMatch();
	return *it;
}

#endif