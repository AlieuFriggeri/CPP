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
	ShrubberyCreationForm form("buisson");
	PresidentialPardonForm form2("50 cent");
	RobotomyRequestForm form3("etienne");
	Bureaucrat john("John", 1);
	Bureaucrat tom("Tom", 44);
	Bureaucrat didier("didier", 2);
	john.signForm(form2);
	john.signForm(form);
	john.signForm(form3);
	john.signForm(form3);
	john.executeForm(form);
	tom.executeForm(form3);
	tom.executeForm(form2);
	didier.executeForm(form2);
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