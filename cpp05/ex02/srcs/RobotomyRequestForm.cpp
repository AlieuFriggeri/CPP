#include "RobotomyRequestForm.hpp"

// Constructors
RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("Robotomy", false, 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy), _target(copy._target)
{
}


// Destructor
RobotomyRequestForm::~RobotomyRequestForm()
{
}


// Operators
RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	if (this != &assign)
		*this = assign;
	return *this;
}

bool RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	srand(time(0));
	int r = rand() % 2;
	if (this->require(executor) == false)
		return false;
	if (r == 1)
	{
		std::cout << "Robotomy Request executed by : " << executor.getName() << std::endl;
		std::cout << this->_target << " has been successfully robotomized" << std::endl;
		return true;
	}
	else
	{
		std::cout << "Robotomy Request executed by : " << executor.getName() << std::endl;
		std::cout << this->_target << " has not been robotomized, damn!" << std::endl;
		return true;
	}
}
