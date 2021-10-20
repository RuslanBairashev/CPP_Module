#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <deque>
#include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
private:
	std::deque	my_stack_;
public:
	MutantStack();
	~MutantStack();
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