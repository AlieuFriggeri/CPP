#include "../headers/AForm.hpp"

// Constructors


AForm::AForm(const AForm &copy)
{
	_name = copy.getName();
	_signed = copy.getSigned();
	_toSign = copy.getToSign();
	_toRun = copy.getToRun();
}

AForm::AForm(std::string name, bool sign, int toSign, int toRun)
{
	_name = name;
	_signed = sign;
	_toSign = toSign;
	_toRun = toRun;
}


// Destructor
AForm::~AForm()
{
}


// Operators
AForm & AForm::operator=(const AForm &assign)
{
	_name = assign.getName();
	_signed = assign.getSigned();
	_toSign = assign.getToSign();
	_toRun = assign.getToRun();
	return *this;
}


// Getters / Setters
std::string AForm::getName() const
{
	return _name;
}
bool AForm::getSigned() const
{
	return _signed;
}
int AForm::getToSign() const
{
	return _toSign;
}
int AForm::getToRun() const
{
	return _toRun;
}

void AForm::beSigned(void)
{
return;
/* 	try
	{
		if (this->getToSign() >= src.getGrade())
		{
			this->_signed = 0;
			std::cout << this->getName() << " has been signed!" << std::endl;
		}
		else
			throw(AForm::GradeTooLowException());
	}
	catch(AForm::GradeTooLowException &e)
	{
		std::cerr << e.what() << '\n';
	}
	 */
}

// Exceptions
const char * AForm::GradeTooLowException::what() const throw()
{
	return "grade too low";
}
const char * AForm::GradeTooHighException::what() const throw()
{
	return "grade too high";
}

/* std::ostream	&operator<<(std::ostream &out, const AForm src){
	out << "AForm: " << src.getName() << " | signed " << src.getSigned() << " | grade to sign " << src.getToSign() << " | grade to run " << src.getToRun();
	return out;
} */