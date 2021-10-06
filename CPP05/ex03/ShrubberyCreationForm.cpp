#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) \
: Form("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& c_name)\
: Form(c_name.getName(), c_name.getSignGrade(), c_name.getExecGrade())
{
	*this = c_name;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& c_name)
{
	if (this == &c_name)
		return *this;
	return *this;
}

void	ShrubberyCreationForm::action() const
{
	std::string	filename;

	filename = _target + "_shrubbery";
	std::ofstream outfile;
	outfile.open(filename.c_str(), std::ios::app);
	outfile << "         v "<< std::endl;
	outfile << "        >X< "<< std::endl;
	outfile << "         A "<< std::endl;
	outfile << "        d$b "<< std::endl;
	outfile << "      .d\\$$b. "<< std::endl;
	outfile << "    .d$i$$\\$$b. "<< std::endl;
	outfile << "       d$$@b "<< std::endl;
	outfile << "      d\\$$$ib "<< std::endl;
	outfile << "    .d$$$\\$$$b "<< std::endl;
	outfile << "  .d$$@$$$$\\$$ib. "<< std::endl;
	outfile << "      d$$i$$b "<< std::endl;
	outfile << "     d\\$$$$@$b "<< std::endl;
	outfile << "  .d$@$$\\$$$$$@b. "<< std::endl;
	outfile << ".d$$$$i$$$\\$$$$$$b. "<< std::endl;
	outfile << "		### "<< std::endl;
	outfile << "		### "<< std::endl;
	outfile << "		### "<< std::endl;
	outfile.close();
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
