#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "iostream"

class RobotomyRequestForm : public Form
{
public:
	/*
	 * Constructor
	 */
	RobotomyRequestForm(const std::string& name);
	RobotomyRequestForm(const RobotomyRequestForm&);

	/*
	 * Operator overlord
	 */
	RobotomyRequestForm& operator=(const RobotomyRequestForm&);

	virtual ~RobotomyRequestForm();
private:
	/*
	 *  Func-member
	 */
	virtual void do_it() const;

	std::string ASCII_tree;
};

#endif
