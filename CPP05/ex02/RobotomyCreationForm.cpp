#include "RobotomyCreationForm.hpp"
#include <cstdlib>

RobotomyCreationForm::RobotomyCreationForm(std::string target) \
: Form("RobotomyCreationForm", 72, 45), _target(target) {}

RobotomyCreationForm::RobotomyCreationForm(const RobotomyCreationForm& c_name)\
: Form(c_name.getName(), c_name.getSignGrade(), c_name.getExecGrade())
{
	*this = c_name;
}

RobotomyCreationForm&	RobotomyCreationForm::operator=(const RobotomyCreationForm& c_name)
{
	if (this == &c_name)
		return *this;
	return *this;
}

void	RobotomyCreationForm::action() const
{
	int	random_val = std::rand();
	std::cout << "<drilling noise....>   ";
	if (random_val % 2)
		std::cout << this->_target << " has been robotomized succesfully!!!" << std::endl;
	else
		std::cout << "It's a failure!!!" << std::endl;
}

void	RobotomyCreationForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (this->getStatus() == false)
			throw Form::NotSigned();
		else
		{
			if (executor.getGrade() > this->getExecGrade())
				throw Form::TooLow();
		}
		this->action();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
