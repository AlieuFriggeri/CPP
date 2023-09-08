#include "PresidentialPardonForm.hpp"

// Constructors
PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("President", false, 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy), _target(copy._target)
{
	(void) copy;
}


// Destructor
PresidentialPardonForm::~PresidentialPardonForm()
{
}


// Operators
PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &assign)
{
	(void) assign;
	return *this;
}

bool PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->require(executor) == false)
		return false;
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	return true;
}

