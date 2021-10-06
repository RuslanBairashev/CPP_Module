#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;

class ShrubberyCreationForm: virtual public Form
{
private:
	const std::string	_target;
public:
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm() {}
	ShrubberyCreationForm(const ShrubberyCreationForm& c_name);
	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& c_name);

	void	action() const;
	void	execute(Bureaucrat const & executor) const;
};

#endif