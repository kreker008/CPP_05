#include "Intern.hpp"

/*
 *	Constructor
 */
Intern::Intern()
{}

Intern::Intern(const Intern& I)
{
	(void)I;
}

/*
 *  Operator overlord
 */
Intern& Intern::operator=(const Intern& I)
{
	(void)I;
	return(*this);
}

/*
 *  Func-member
 */
Form* Intern::makeForm(const std::string& func_name, const std::string& target)
{
	Form* (Intern::*ptr[])(const std::string&) =
	{
		&Intern::makeRobotomyRequestForm,
		&Intern::makePresidentialPardonForm,
		&Intern::makeShrubberyCreationForm
	};
	std::string funcname[] =
	{
			"robotomy request",
			"presidential pardon",
			"shrubbery creation"
	};
	int i = 0;

	while(i < 3 && func_name != funcname[i])
			++i;
	if (i == 3)
	{
		std::cout << "Error: Invalid func name\n";
		return (NULL);
	}
	return 	(this->*ptr[i])(target);
}

Form* Intern::makeRobotomyRequestForm(const std::string& target)
{
	return (new RobotomyRequestForm(target));
}

Form* Intern::makePresidentialPardonForm(const std::string& target)
{
	return (new PresidentialPardonForm(target));
}

Form* Intern::makeShrubberyCreationForm(const std::string& target)
{
	return (new ShrubberyCreationForm(target));
}

Intern::~Intern()
{}