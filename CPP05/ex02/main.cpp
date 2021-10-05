#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyCreationForm.hpp"
#include "PresidentalPardonForm.hpp"

//void	print_tests()

int	main()
{
	Bureaucrat				boss("Volodimir", 1);
	Bureaucrat				clerk("Vasya", 50);
	Bureaucrat				intern("Tshenok", 150);
	ShrubberyCreationForm	f1("target");

	std::cout << "TEST1: Intern at work:" << std::endl;
	f1.execute(intern);
	intern.executeForm(f1);
	f1.beSigned(intern);
	f1.execute(intern);
	intern.executeForm(f1);

	std::cout << std::endl << "TEST2: Clerk at work:" << std::endl;
	f1.execute(clerk);
	clerk.executeForm(f1);
	f1.beSigned(clerk);
	f1.execute(clerk);
	clerk.executeForm(f1);

	std::cout << std::endl << "TEST3: Boss at work:" << std::endl;
	f1.execute(boss);
	boss.executeForm(f1);
	f1.beSigned(boss);
	f1.execute(boss);
	boss.executeForm(f1);

	RobotomyCreationForm	f2("human");

	std::cout << std::endl << "TEST4: Intern at work:" << std::endl;
	f2.execute(intern);
	intern.executeForm(f2);
	f2.beSigned(intern);
	f2.execute(intern);
	intern.executeForm(f2);

	std::cout << std::endl << "TEST5: Clerk at work:" << std::endl;
	f2.execute(clerk);
	clerk.executeForm(f2);
	f2.beSigned(clerk);
	f2.execute(clerk);
	clerk.executeForm(f2);

	std::cout << std::endl << "TEST6: Boss at work:" << std::endl;
	f2.execute(boss);
	boss.executeForm(f2);
	f2.beSigned(boss);
	f2.execute(boss);
	boss.executeForm(f2);

	PresidentalPardonForm	f3("Innocent killer");

	std::cout << std::endl << "TEST7: Intern at work:" << std::endl;
	f3.execute(intern);
	intern.executeForm(f3);
	f3.beSigned(intern);
	f3.execute(intern);
	intern.executeForm(f3);

	std::cout << std::endl << "TEST8: Clerk at work:" << std::endl;
	f3.execute(clerk);
	clerk.executeForm(f3);
	f3.beSigned(clerk);
	f3.execute(clerk);
	clerk.executeForm(f3);

	std::cout << std::endl << "TEST9: Boss at work:" << std::endl;
	f3.execute(boss);
	boss.executeForm(f3);
	f3.beSigned(boss);
	f3.execute(boss);
	boss.executeForm(f3);

	return 0;
}