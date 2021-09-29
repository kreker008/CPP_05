#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "iostream"

int main()
try
{
	Bureaucrat Karl("Karl", 149);
	Bureaucrat Jane("Jane", 2);
	Form f("frm", 50, 1);

	std::cout << Karl << Jane;
	f.beSigned(Jane);
	f.beSigned(Karl);
	std::cout << std::endl;

	Jane.incGrade();
	Karl.incGrade();

	std::cout << Karl << Jane << std::endl;
	Jane.signForm(f);
	Karl.signForm(f);

	Jane.incGrade();
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
