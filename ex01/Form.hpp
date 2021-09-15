#ifndef FORM_HPP
#define FORM_HPP

#include "string"
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	/*
	 *  Constructor
	 */
	Form(const std::string&, const unsigned int, const unsigned int);

	/*
	 *  Func-member
	 */
	const unsigned int& getSignGrade() const;
	const unsigned int&	getCheckGrade() const;
	const std::string&	getName() const;
	const bool&			getisSigned() const;
	void				beSigned(const Bureaucrat& br);

private:
	/*
	 *  Func-member
	 */
	void GradeTooHighException();
	void GradeTooLowException();

	const std::string	name;
	const unsigned int 	SignGrade;
	const unsigned int 	CheckGrade;
	bool 				isSigned;
};


#endif
