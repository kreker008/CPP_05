#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "iostream"

int main()
try
{
	Bureaucrat Karl("Karl", 50);
	Form *fr = new RobotomyRequestForm("T-800"); // sign 72, exec 45
	Form *fs = new ShrubberyCreationForm("home"); // sign 145, exec 137
	Form *fp = new PresidentialPardonForm("Edvard"); // sign 25, exec 5

	//fr->beSigned(Karl);
	Karl.signForm(*fr);
	Karl.executeForm(*fr);
	std::cout << std::endl;

	fs->beSigned(Karl);
	Karl.executeForm(*fs);
	std::cout << std::endl;

	Karl.signForm(*fp);
	Karl.executeForm(*fp);

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
