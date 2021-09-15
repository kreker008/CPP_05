#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "string"
#include "iostream"
#include "Form.hpp"

class Form;

class Bureaucrat
{
public:
	/*
	 *  Constructor
	 */
	Bureaucrat(const std::string& name, const int grade);

	/*
	 *  Func-member
	 */
	const std::string& getName() const;
	const unsigned int& getGrade() const;
	void incGrade();
	void decrGrade();
	void signForm(const Form&) const;

private:
	/*
	 *  Func-member
	 */
	void GradeTooHighException();
	void GradeTooLowException();

	const std::string	name;
	unsigned int		grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);



#endif
