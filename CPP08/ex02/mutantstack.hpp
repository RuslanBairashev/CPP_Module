#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <deque>
#include <stack>

template<typename T >
class MutantStack: public std::stack<T>
{
public:
	MutantStack() {}
	~MutantStack() {}
	MutantStack(MutantStack & c_name) { *this = *c_name; }
	MutantStack&	operator=(const MutantStack& c_name)
	{
		if (this == &c_name)
			return *this;
		*this = c_name;
		return *this;
	}

	typedef	typename std::stack<T>::container_type::iterator	iterator;
	iterator begin() { return std::stack<T>::c.begin(); }
	iterator end() { return std::stack<T>::c.end(); }
	iterator rbegin() { return std::stack<T>::c.rbegin(); }
	iterator rend() { return std::stack<T>::c.rend(); }
};

#endif