#include "Intern.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

// Constructors
Intern::Intern()
{
}

Intern::Intern(const Intern &copy)
{
	(void) copy;
}


// Destructor
Intern::~Intern()
{
}


// Operators
Intern & Intern::operator=(const Intern &assign)
{
	(void) assign;
	return *this;
}

Form *Intern::makeForm(std::string type, std::string target)
{
	Form *ret;
	std::string form[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	Form *forms[3] = {new RobotomyRequestForm(target), new PresidentialPardonForm(target), new ShrubberyCreationForm(target)};
	for (int i = 0; i < 3; i++)
	{
		if (type.compare(form[i]) == 0)
		{
			std::cout << "Intern created " << form[i] << " Form" << std::endl;
			ret = forms[i];
			for (int j = 0; j < 3; j++)
				if (j != i)
					delete forms[j];
			return ret;
		}
	}
	std::cout << "Intern: Error: Form type does not exist!" << std::endl;
	return NULL;
}