#include "RobotomyRequestForm.hpp"

/*
 * Constructor
 */
RobotomyRequestForm::RobotomyRequestForm(const std::string& name) : Form(name, 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& shf)
: Form(shf.getName(), 72, 45), ASCII_tree(shf.ASCII_tree)
{}

/*
 * Operator overlord
 */
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& shf)
{
	if (this == &shf)
		return (*this);
	ASCII_tree = shf.ASCII_tree;
	return (*this);
}

/*
 *  Func-member
 */
void RobotomyRequestForm::do_it() const
{
	srand((unsigned int)time (NULL));

	std::cout << "Brgrgrrgrbrhrgg" << std::endl;
	if ((rand() % 2) == 0)
		std::cout << "Error:" << getName() << "failed to robotize(" << std::endl;
	else
		std::cout << getName() << " has been robotomized" << std::endl;
}


RobotomyRequestForm::~RobotomyRequestForm()
{}