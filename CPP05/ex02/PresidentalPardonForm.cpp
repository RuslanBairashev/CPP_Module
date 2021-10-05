#include "PresidentalPardonForm.hpp"

PresidentalPardonForm::PresidentalPardonForm(std::string target) \
: Form("PresidentalPardonForm", 25, 5), _target(target) {}

PresidentalPardonForm::PresidentalPardonForm(const PresidentalPardonForm& c_name)\
: Form(c_name.getName(), c_name.getSignGrade(), c_name.getExecGrade())
{
	*this = c_name;
}

PresidentalPardonForm&	PresidentalPardonForm::operator=(const PresidentalPardonForm& c_name)
{
	if (this == &c_name)
		return *this;
	return *this;
}

void	PresidentalPardonForm::action() const
{
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

void	PresidentalPardonForm::execute(Bureaucrat const & executor) const
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
