#ifndef PRESIDENTALPARDONFORM_HPP
#define PRESIDENTALPARDONFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentalPardonForm: virtual public Form
{
private:
	const std::string	_target;
public:
	PresidentalPardonForm(std::string target);
	~PresidentalPardonForm() {}
	PresidentalPardonForm(const PresidentalPardonForm& c_name);
	PresidentalPardonForm&	operator=(const PresidentalPardonForm& c_name);

	void	action() const;
	void	execute(Bureaucrat const & executor) const;
};

#endif