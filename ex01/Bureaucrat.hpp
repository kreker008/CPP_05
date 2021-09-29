#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "string"
#include "iostream"
#include "Form.hpp"

class Form;

class Bureaucrat
{
public:
	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException(const std::string&);
		virtual const char * what() const throw();
		~GradeTooHighException() throw(); // Не компилится без этого throw()
	private:
		std::string message;
	};

	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException(const std::string&);
		virtual const char*	what() const throw();
		~GradeTooLowException() throw(); // Не компилится без этого throw()
	private:
		std::string message;
	};

	/*
	 *  Constructor
	 */
	Bureaucrat(const std::string& name, const int grade);
	Bureaucrat(const Bureaucrat&);


	/*
	 *  Func-member
	 */
	const std::string&	getName() const;
	const unsigned int&	getGrade() const;
	void				incGrade() throw(GradeTooLowException());
	void				decrGrade() throw(GradeTooLowException());
	void 				signForm(Form& f);

	/*
	 *  Operator overlord
	 */
	Bureaucrat& operator=(const Bureaucrat&);

	~Bureaucrat();
private:
	const std::string	name;
	unsigned int		grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif