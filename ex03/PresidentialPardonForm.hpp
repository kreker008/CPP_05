#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include "iostream"

class PresidentialPardonForm : public Form
{
public:
	/*
	 * Constructor
	 */
	PresidentialPardonForm(const std::string& name);
	PresidentialPardonForm(const PresidentialPardonForm&);

	/*
	 * Operator overlord
	 */
	PresidentialPardonForm& operator=(const PresidentialPardonForm&);

	virtual ~PresidentialPardonForm();
private:
	/*
	 *  Func-member
	 */
	virtual void do_it() const;

	std::string ASCII_tree;
};

#endif
