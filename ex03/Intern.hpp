#ifndef CPP_05_INTERN_HPP
#define CPP_05_INTERN_HPP

#include "string"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern
{
public:
	/*
	 *  Constructor
	 */
	Intern();

	/*
	 *  Func-member
	 */
	Form* makeForm(const std::string&, const std::string&);
	Form* makeRobotomyRequestForm(const std::string& target);
	Form* makePresidentialPardonForm(const std::string& target);
	Form* makeShrubberyCreationForm(const std::string& target);

	~Intern();
private:
	/*
	 *  Constructor
	 */
	Intern(const Intern&);

	/*
	 *  Operator overlord
	 */
	Intern& operator=(const Intern&);

};


#endif //CPP_05_INTERN_HPP
