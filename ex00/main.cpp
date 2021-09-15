#include <iostream>
#include "Bureaucrat.hpp"
#include "iostream"

int main()
{
	try
	{
		Bureaucrat br1("Karl", 149);
		Bureaucrat br2("Jane", 2);

		std::cout << br1 << br2;
		br1.decrGrade();
		br2.incGrade();

		std::cout << br1 << br2;
		br1.decrGrade();
		br2.incGrade();
	}
	catch (std::exception& e)
	{
		std::cout << "invalid grade" << std::cout;
	}
	return 0;
}
