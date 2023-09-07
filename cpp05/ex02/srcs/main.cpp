#include <iostream>
#include <exception>
#include <fstream>
#include "../headers/Bureaucrat.hpp"
#include "../headers/Form.hpp"
#include "../headers/ShrubberyCreationForm.hpp"

int main()
{
	ShrubberyCreationForm form("salut");
	Bureaucrat john("John", 1);
	//john.signForm(form);
	form.execute(john);
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