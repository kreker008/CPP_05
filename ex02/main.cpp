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
	Bureaucrat karl("Karl", 50);
	RobotomyRequestForm *fr = new RobotomyRequestForm("T-800"); // sign 72, exec 45
	ShrubberyCreationForm *fs = new ShrubberyCreationForm("home"); // sign 145, exec 137
	PresidentialPardonForm *fp = new PresidentialPardonForm("EdvardForm"); // sign 25, exec 5

	//fr->beSigned(karl);
	karl.signForm(*fr);
	karl.executeForm(*fr);
	std::cout << std::endl;

	fs->beSigned(karl);
	karl.executeForm(*fs);
	std::cout << std::endl;

	karl.signForm(*fp);
	karl.executeForm(*fp);
	std::cout << std::endl;

	Bureaucrat ann("Ann", 1);

	ann.signForm(*fp);
	ann.executeForm(*fp);
	std::cout << std::endl;

	ann.executeForm(*fr);
	std::cout << std::endl;

	delete fr;
	delete fs;
	delete fp;
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
