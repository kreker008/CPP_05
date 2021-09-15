#include "Form.hpp"

/*
 *  Constructor
 */
Form::Form(const std::string& name, const unsigned int check, const unsigned int sign)
: name(name), SignGrade(sign), CheckGrade(check), isSigned(false)
{
	if (check > 150 || check == 0 || sign > 150 || sign == 0) throw std::exception();
}

const unsigned int& Form::getSignGrade() const
{
	return (SignGrade);
}

const unsigned int& Form::getCheckGrade() const
{
	return (CheckGrade);
}

const std::string&	Form::getName() const
{
	return (name);
}

const bool&			Form::getisSigned() const
{
	return (isSigned);
}

void Form::beSigned(const Bureaucrat& br)
{
	try
	{
		if(br.getGrade() > SignGrade) throw std::exception();
	}
	catch (std::exception e)
	{
		br.signForm(*this);
	}
}

void Form::GradeTooLowException()
{
	std::cout << "" << std::endl;
}

void Form::GradeTooHighException()
{
	std::cout << "" << std::endl;
}