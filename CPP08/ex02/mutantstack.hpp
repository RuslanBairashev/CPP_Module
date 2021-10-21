#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <deque>
#include <stack>

template<typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
	//using std::stack<T, Container>::c;
private:
	std::deque	my_stack_;
public:
	MutantStack();
	~MutantStack();

	typedef		MutantStack<T>	iterator;
	iterator	begin() { return std::begin(c); }
	iterator	end() { return std::end(c); }

	//MutantStack<T>::iterator
};
/*
MutantStack::MutantStack()
{
}

MutantStack::~MutantStack()
{
}
*/

#endif