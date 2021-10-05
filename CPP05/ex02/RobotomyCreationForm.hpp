#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;

class RobotomyCreationForm: virtual public Form
{
private:
	const std::string	_target;
public:
	RobotomyCreationForm(std::string target);
	~RobotomyCreationForm() {}
	RobotomyCreationForm(const RobotomyCreationForm& c_name);
	RobotomyCreationForm&	operator=(const RobotomyCreationForm& c_name);

	void	action() const;
	void	execute(Bureaucrat const & executor) const;
};

#endif