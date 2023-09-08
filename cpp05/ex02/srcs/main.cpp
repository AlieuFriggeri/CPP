#include <iostream>
#include <exception>
#include <fstream>
#include <cstdlib>
#include "../headers/Bureaucrat.hpp"
#include "../headers/Form.hpp"
#include "../headers/ShrubberyCreationForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/PresidentialPardonForm.hpp"

int main()
{
	ShrubberyCreationForm form("fdp__-as0f9as98f");
	PresidentialPardonForm form2("50 cent");
	Bureaucrat john("John", 25);
	Bureaucrat tom("Tom", 5);
	john.signForm(form2);
	john.executeForm(form2);
	tom.executeForm(form2);
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