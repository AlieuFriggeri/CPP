#include <iostream>
#include <exception>
#include <fstream>
#include <cstdlib>
#include "../headers/Bureaucrat.hpp"
#include "../headers/Form.hpp"
#include "../headers/ShrubberyCreationForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/PresidentialPardonForm.hpp"
#include "../headers/Intern.hpp"

int main()
{
	Form *ptr;
	Intern jerome;
	Bureaucrat etienne("etienn", 1);
	ptr = jerome.makeForm("robotomy request", "damien");
	if (ptr)
	{
		etienne.signForm(*ptr);
		etienne.signForm(*ptr);
		etienne.executeForm(*ptr);
	}
	delete ptr;
	// ShrubberyCreationForm form("buisson");
	// PresidentialPardonForm form2("50 cent");
	// RobotomyRequestForm form3("etienne");
	// Bureaucrat john("John", 22);
	// Bureaucrat tom("Tom", 1);
	// Intern stagiaire;
	// john.signForm(form2);
	// john.signForm(form);
	// john.signForm(form3);
	// john.executeForm(form);
	// tom.executeForm(form2);
	// tom.executeForm(form3);
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