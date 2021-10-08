#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "iostream"
#include "fstream"

class ShrubberyCreationForm : public Form
{
public:
	/*
	 * Constructor
	 */
	ShrubberyCreationForm(const std::string& name);
	ShrubberyCreationForm(const ShrubberyCreationForm&);

	/*
	 * Operator overlord
	 */
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);

	virtual ~ShrubberyCreationForm();
private:
	/*
	 *  Func-member
	 */

	virtual void do_it() const;

	std::string ASCII_tree;
};


#endif
