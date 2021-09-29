#include "ShrubberyCreationForm.hpp"

/*
 * Constructor
 */
ShrubberyCreationForm::ShrubberyCreationForm(const std::string& name) : Form(name, 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& shf)
: Form(shf.getName(), 145, 137), ASCII_tree(shf.ASCII_tree)
{}

/*
 * Operator overlord
 */
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& shf)
{
	if (this == &shf)
		return (*this);
	ASCII_tree = shf.ASCII_tree;
	return (*this);
}

/*
 *  Func-member
 */
void	ShrubberyCreationForm::do_it() const
{
	std::ofstream	new_file;

	new_file.open(this->getName() + "_shrubbery");
	new_file
	<< "              /\\\n"
	<< "             <  >\n"
	<< "              \\/\n"
	<< "              /\\\n"
	<< "             /  \\\n"
	<< "            /++++\\\n"
	<< "           /  ()  \\\n"
	<< "           /      \\\n"
	<< "          /~`~`~`~`\\\n"
	<< "         /  ()  ()  \\\n"
	<< "         /          \\\n"
	<< "        /*&*&*&*&*&*&\\\n"
	<< "       /  ()  ()  ()  \\\n"
	<< "       /              \\\n"
	<< "      /++++++++++++++++\\\n"
	<< "     /  ()  ()  ()  ()  \\\n"
	<< "     /                  \\\n"
	<< "    /~`~`~`~`~`~`~`~`~`~`\\\n"
	<< "   /  ()  ()  ()  ()  ()  \\\n"
	<< "   /*&*&*&*&*&*&*&*&*&*&*&\\\n"
	<< "  /                        \\\n"
	<< " /,.,.,.,.,.,.,.,.,.,.,.,.,.\\\n"
	<< "            |   |\n"
	<< "           |`````|\n"
	<< "           \\_____/\n";
	new_file.close();
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{}