#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class	Brain
{
public:
	std::string	ideas[100];
public:
	Brain();
	~Brain();
	Brain(const Brain& c_name);
	Brain&	operator=(const Brain& c_name);
};

#endif