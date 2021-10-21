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
	MutantStack(): std::stack<T>() {}
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
	typedef	typename 
		std::stack<T>::container_type::reverse_iterator	reverse_iterator;
	iterator begin() { return std::stack<T>::c.begin(); }
	iterator end() { return std::stack<T>::c.end(); }
	reverse_iterator rbegin() { return std::stack<T>::c.rbegin(); }
	reverse_iterator rend() { return std::stack<T>::c.rend(); }
};

#endif