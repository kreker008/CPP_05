#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "iostream"
#include "Intern.hpp"

int main()
try
{
	Bureaucrat Karl("Karl", 1);
	Intern Lui;
	Form * pf = Lui.makeForm("presidential pardon", "ANN presidential");
	Form * sf = Lui.makeForm("shrubbery creation", "ANN shrubbery");
	Form * rf = Lui.makeForm("robotomy request", "ANN robotomy");

	Lui.makeForm("HAHAH", "HAHAH");

	Karl.signForm(*pf);
	Karl.executeForm(*pf);

	Karl.signForm(*sf);
	Karl.executeForm(*sf);

	Karl.signForm(*rf);
	Karl.executeForm(*rf);

	delete pf;
	delete sf;
	delete rf;
	return (0);
}
catch (std::exception& e)
{
	e.what();
}
catch (...)
{
	std::cout << "UB" << std::endl;
}
