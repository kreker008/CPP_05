#include "PresidentialPardonForm.hpp"

/*
 * Constructor
 */
PresidentialPardonForm::PresidentialPardonForm(const std::string& name) : Form(name, 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& shf)
: Form(shf.getName(), 25, 5), ASCII_tree(shf.ASCII_tree)
{}

/*
 * Operator overlord
 */
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& shf)
{
	if (this == &shf)
		return (*this);
	ASCII_tree = shf.ASCII_tree;
	return (*this);
}

/*
 *  Func-member
 */
void PresidentialPardonForm::do_it() const
{
	srand((unsigned int)time (NULL));

	std::cout << getName() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}


PresidentialPardonForm::~PresidentialPardonForm()
{}