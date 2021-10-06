#include <iostream>
#include "Bureaucrat.hpp"
#include "iostream"

int main()
try
{
	Bureaucrat br1("Karl", 155);
	Bureaucrat br2("Jane", 2);

	std::cout << br1 << br2;
	br1.decrGrade();
	br2.incGrade();

	std::cout << br1 << br2;
	br1.decrGrade();
	br2.incGrade();
	return 0;
}
catch (std::exception& e)
{
	std::cout << "invalid grade" << std::cout;
	return -1;
}

