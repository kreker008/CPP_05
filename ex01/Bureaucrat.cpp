#include "Bureaucrat.hpp"

/*
 *  Constructor
 */
Bureaucrat::Bureaucrat(const std::string &name, const int grade) : name(name), grade(grade)
{
	if (grade > 150 || grade == 0)	throw std::exception();
}

/*
 *  Func-member
 */
void	Bureaucrat::incGrade()
{
	try
	{
		if (grade <= 1) throw std::exception();
		--grade;
	}
	catch (std::exception & e)
	{
		GradeTooHighException();
	}
}

void	Bureaucrat::decrGrade()
{
	try
	{
		if (grade >= 150) throw std::exception();
		++grade;
	}
	catch (std::exception & e)
	{
		GradeTooLowException();
	}
}

const std::string& Bureaucrat::getName() const
{
	return (name);
}

const unsigned int& Bureaucrat::getGrade() const
{
	return (grade);
}

void Bureaucrat::signForm(const Form& f) const
{
	if (f.getisSigned() == true)
		std::cout << name << " signs " << f.getName() << std::endl;
	else
		std::cout << name << " cannot sign" << f.getName() << "because need" << f.getCheckGrade()
				<< " grade, now" << getGrade() << std::endl;
}

void Bureaucrat::GradeTooHighException()
{
	std::cout << "The limit of the highest grade has been reached" << std::endl;
}

void Bureaucrat::GradeTooLowException()
{
	std::cout << "The limit of the smallest grade has been reached" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return os;
}