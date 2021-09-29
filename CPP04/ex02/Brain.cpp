#include "Brain.hpp"

Brain::Brain()
{
	for(int i = 0; i < 100; i++)
		ideas[i] = "wind";
	std::cout << "Brain class constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain class destructor called" << std::endl;
}

Brain::Brain(const Brain& c_name)
{
	*this = c_name;
}

Brain&	Brain::operator=(const Brain& c_name)
{
	if (this == &c_name)
		return *this;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = c_name.ideas[i];
	return *this;
}
