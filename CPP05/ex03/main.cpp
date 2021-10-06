#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyCreationForm.hpp"
#include "PresidentalPardonForm.hpp"
#include "Intern.hpp"

void	print_tests(Bureaucrat& name, Form *fx)
{
	std::cout << name.getName() << " at work:" << std::endl;
	fx->execute(name);
	name.executeForm(*fx);
	fx->beSigned(name);
	fx->execute(name);
	name.executeForm(*fx);
}

int	main()
{
	Intern					intern;
	Bureaucrat				boss("Volodimir", 1);

	Form*					rrs;
	rrs = intern.makeForm("shrubbery creation", "target_name");
	std::cout << "Inside form:" << std::endl;
	std::cout << *rrs;
	std::cout << std::endl << "TEST1: " << std::endl;
	print_tests(boss, rrs);

	Form*					rrr;
	rrr = intern.makeForm("robotomy request", "target_name");
	std::cout << "Inside form:" << std::endl;
	std::cout << *rrr;
	std::cout << std::endl << "TEST2: " << std::endl;
	print_tests(boss, rrr);

	Form*					rrp;
	rrp = intern.makeForm("presidental pardon", "target_name");
	std::cout << "Inside form:" << std::endl;
	std::cout << *rrp;
	std::cout << std::endl << "TEST3: " << std::endl;
	print_tests(boss, rrp);

	std::cout << std::endl;
	if (rrs)
		delete rrs;
	if (rrr)
		delete rrr;
	if (rrp)
		delete rrp;

	return 0;
}