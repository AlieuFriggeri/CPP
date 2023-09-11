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

std::string ShrubberyCreationForm::getTarget() const
{
	return this->_target;
}

bool ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->require(executor) == false)
		return false;
	std::ofstream out;
	out.open(this->getTarget()+"_shrubbery");
	std::string tree[11] = {"     ccee88oo",
	"  C8O8O8Q8PoOb o8oo",
	" dOB69QO8PdUOpugoO9bD",
	"CgggbU8OU qOp qOdoUOdcb",
	"    6OuU  /p u gcoUodpP",
	"      \\\\\\//  /douUP",
	"        \\\\/\\////",
	"         |||/\\",
	"         |||\\/",
	"         |||||",
	"   .....//||||\\...."
	};

	for (int i = 0; i < 11; i++)
	{
		out << tree[i] << std::endl;
	}
	std::cout << "Shrubbery executed by : " << executor.getName() << std::endl;
	return true;
}

