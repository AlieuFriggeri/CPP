#include <iostream>
#include <exception>
#include <fstream>
#include "../headers/Bureaucrat.hpp"
#include "../headers/Form.hpp"

int main()
{
	Form form;
	Bureaucrat john("john", 100);
	form.beSigned(john);
	john.signForm(form);
	// try
	// {
	// 	john.gradeup();
	// 	if (john.getGrade() > 150)
	// 		throw Bureaucrat::GradeTooLowException();
	// 	else if (john.getGrade() < 1)
	// 		throw Bureaucrat::GradeTooHighException();
	// }
	// catch(Bureaucrat::GradeTooHighException &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	// catch(Bureaucrat::GradeTooLowException &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	return 0;
}