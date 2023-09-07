#include "ShrubberyCreationForm.hpp"

// Constructors
ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("Shrubbery", false, 145, 137), _target(target)
{
	//std::cout << "\e[0;33mDefault Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy), _target(copy._target)
{
	(void) copy;
	//std::cout << "\e[0;33mCopy Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}


// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	//std::cout << "\e[0;31mDestructor called of ShrubberyCreationForm\e[0m" << std::endl;
}


// Operators
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	(void) assign;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() >= this->getToRun())
	{
		//std::cout << "Grade too low to Run " << this->getName() << ", sorry " << executor.getName() << std::endl;
		return;
	}
	else if (this->getSigned() == false)
	{
		std::cout << this->getName() << "Form is not signed " << ", sorry " << executor.getName() << std::endl;
		return;
	}
	std::cout << "form executed" << std::endl;
}

