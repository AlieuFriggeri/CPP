#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

// Constructors

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target) : _target(target)
{
	std::cout << "constructor target: " << _target << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy)
{
	*this = copy;
}


// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


// Operators
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	(void) assign;
	return *this;
}

/* std::string ShrubberyCreationForm::getName()
{
	return this._name;
}

bool ShrubberyCreationForm::getSigned()
{
	return this._signed;
}

int ShrubberyCreationForm::getToSign()
{
	return this._toSign;
}

int ShrubberyCreationForm::getToRun()
{
	return this.getToRun;
}

void ShrubberyCreationForm::beSigned(const Bureaucrat &src)
{
	if (src.getGrade <= this.getToSign)
		this._signed = true;
} */
