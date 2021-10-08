#ifndef FORM_HPP
#define FORM_HPP

#include "string"
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException(const std::string&);
		virtual const char* what() const throw();
		~GradeTooHighException() throw(); // Не компилится без throw()

	private:
		std::string message;
	};

	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException(const std::string&);
		virtual const char* what() const throw();
		~GradeTooLowException() throw(); // Не компилится без throw()

	private:
		std::string message;
	};
	/*
	 *  Constructor
	 */
	Form(const std::string&, const unsigned int, const unsigned int);
	Form(const Form&);

	/*
	 *  Func-member
	 */
	const unsigned int& getSignGrade() const;
	const unsigned int&	getExecGrade() const;
	const std::string&	getName() const;
	const bool&			getisSigned() const;
	void				beSigned(Bureaucrat& br);
	bool 				execute(Bureaucrat& executor);

	virtual ~Form();
private:
	/*
	 *  Func-member
	 */
	virtual void	do_it() const = 0;

	/*
	 *  Operator overlord
	 */
	Form& operator=(const Form&);

	const std::string	name;
	const unsigned int 	SignGrade;
	const unsigned int 	ExecGrade;
	bool 				isSigned;
};


#endif
