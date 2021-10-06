#include "Form.hpp"

/*
 *  Constructor
 */
Form::Form(const std::string& name, const unsigned int exec, const unsigned int sign)
try : name(name), SignGrade(sign), ExecGrade(exec), isSigned(false)
{
	if (exec > 150 || sign > 150) throw Form::GradeTooHighException("Invalid Rating Data");
	if (exec == 0 || sign == 0) throw Form::GradeTooLowException("Invalid Rating Data");
}
catch (std::exception& e)
{}

Form::Form(const Form &f) : name(f.name), SignGrade(f.SignGrade),
							ExecGrade(f.ExecGrade), isSigned(f.isSigned)
{}

/*
 *  Operator overlord
 */
Form& Form::operator=(const Form& f)
{
	(void )f;
	return (*this);
}

/*
 *  Func-member
 */
const unsigned int& Form::getSignGrade() const
{
	return (SignGrade);
}

const unsigned int& Form::getCheckGrade() const
{
	return (ExecGrade);
}

const std::string&	Form::getName() const
{
	return (name);
}

const bool&			Form::getisSigned() const
{
	return (isSigned);
}

void Form::beSigned(Bureaucrat& br)
try
{
	if (isSigned == true) throw GradeTooLowException(name + " form has already been signed ");
	if (br.getGrade() > SignGrade) throw GradeTooLowException(br.getName() + " cannot sign " + getName() + " because need more grade");
	isSigned = true;
}
catch (std::exception& e)
{
	e.what();
}


Form::~Form()
{}


//Bureaucrat :: GradeTooHighException
Form::GradeTooHighException::GradeTooHighException(const std::string& str)
: message(str){}

const char* Form::GradeTooHighException::what() const throw()
{
	std::cout << message << std::endl;
	return (NULL);
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{}



//Form :: GradeTooLowException
Form::GradeTooLowException::GradeTooLowException(const std::string& str)
: message(str){}

const char* Form::GradeTooLowException::what() const throw()
{
	std::cout << message << std::endl;
	return (NULL);
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{}

//None class
