#include "Bureaucrat.hpp"

 //Bureaucrat
 /*
  *  Constructor
  */
 Bureaucrat::Bureaucrat(const std::string &name, const int grade)
 try : name(name), grade(grade)
 {
 	if (grade > 150) throw GradeTooHighException("Invalid Rating Data");
 	if (grade == 0) throw GradeTooLowException("Invalid Rating Data");
 }
 catch (std::exception& e)
 {
 	e.what();
 }

 Bureaucrat::Bureaucrat(const Bureaucrat& br) : name(br.name), grade(br.grade)
 {}

 /*
  *  Func-member
  */
 void	Bureaucrat::incGrade() throw(GradeTooLowException())
 {
 	try
 	{
 		if (grade <= 1) throw GradeTooLowException("The limit of the smallest grade has been reached");
 		--grade;
 	}
 	catch (std::exception& e)
 	{
 		e.what();
 	}
 }

 void	Bureaucrat::decrGrade() throw(GradeTooLowException())
 {
 	try
 	{
 		if (grade >= 150) throw GradeTooLowException("The limit of the highest grade has been reached");
 		++grade;
 	}
 	catch (std::exception& e)
 	{
 		e.what();
 	}
 }

 void Bureaucrat::signForm(Form& f)
 try
 {
	if (f.getSignGrade() < grade) throw GradeTooLowException(name + " cannot sign " + f.getName() + " because need more grade");
	if (f.getisSigned() == false)
	{
		f.beSigned(*this);
		std::cout << name << " signs " << f.getName()<< std::endl;
	}
	else throw GradeTooLowException(name + " form has already been signed ");
 }
catch (std::exception& e)
{
	e.what();
}


 void	Bureaucrat::executeForm(Form& form)
 {
 	if (form.execute(*this) == true)
 		std::cout << name << " execute " << form.getName() << std::endl;
 	else
 		std::cout << "Error: " << name << " can't execute " << form.getName() << std::endl;
 }

 const std::string& Bureaucrat::getName() const
 {
 	return (name);
 }

 const unsigned int& Bureaucrat::getGrade() const
 {
 	return (grade);
 }

 /*
  *  Operator overlord
  */
 Bureaucrat& Bureaucrat::operator=(const Bureaucrat& br)
{
	if (this == &br)
		return (*this);
	grade = br.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{}



//Bureaucrat :: GradeTooHighException
Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string& str)
: message(str){}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	std::cout << message << std::endl;
	return (NULL);
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{}



//Bureaucrat :: GradeTooLowException
Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string& str)
: message(str){}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	std::cout << message << std::endl;
	return (NULL);
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{}



// None class
std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return os;
}