#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "string"
#include "iostream"

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
