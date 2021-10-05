#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) \
: Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	//_target = target;
	//target += "_shrubbery";
	//std::ofstream outfile;
	//outfile.open(target.c_str(), std::ios::app);
	//outfile << "ASCII" << std::endl;
	//outfile.close();
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& c_name)\
: Form(c_name.getName(), c_name.getSignGrade(), c_name.getExecGrade())
{
	*this = c_name;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& c_name)
{
	if (this == &c_name)
		return *this;
	//this->_target = c_name._target;
	return *this;
}

void	ShrubberyCreationForm::action() const
{
	std::string	filename;

	filename = _target + "_shrubbery";
	std::ofstream outfile;
	outfile.open(filename.c_str(), std::ios::app);
	outfile << "ASCII" << std::endl;
	outfile.close();
	//std::cout << "file created\n";
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
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
