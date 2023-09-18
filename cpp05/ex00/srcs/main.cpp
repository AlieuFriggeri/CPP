#include <iostream>
#include <exception>
#include "../headers/Bureaucrat.hpp"

int main()
{
	Bureaucrat john("john", 1);
	std::cout << john << std::endl;
	try
	{
		john.gradeup();
		if (john.getGrade() > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (john.getGrade() < 1)
			throw Bureaucrat::GradeTooHighException();
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}