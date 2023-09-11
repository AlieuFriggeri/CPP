#include "../headers/Form.hpp"

// Constructors
Form::Form()
{
	_name = "Default form";
	_signed = false;
	_toSign = 100;
	_toRun = 70;
}

Form::Form(const Form &copy)
{
	_name = copy.getName();
	_signed = copy.getSigned();
	_toSign = copy.getToSign();
	_toRun = copy.getToRun();
}

Form::Form(std::string name, bool sign, int toSign, int toRun)
{
	_name = name;
	_signed = sign;
	_toSign = toSign;
	_toRun = toRun;
}


// Destructor
Form::~Form()
{
}


// Operators
Form & Form::operator=(const Form &assign)
{
	_name = assign.getName();
	_signed = assign.getSigned();
	_toSign = assign.getToSign();
	_toRun = assign.getToRun();
	return *this;
}


// Getters / Setters
std::string Form::getName() const
{
	return _name;
}
bool Form::getSigned() const
{
	return _signed;
}
int Form::getToSign() const
{
	return _toSign;
}
int Form::getToRun() const
{
	return _toRun;
}

bool Form::beSigned(const Bureaucrat &src) 
{
	try
	{
		if (this->getToSign() >= src.getGrade())
		{
			this->_signed = true;
			std::cout << this->getName() << " has been signed by : " << src.getName() << std::endl;
			return true;
		}
		else
			throw(Form::GradeTooLowException());
	}
	catch(Form::GradeTooLowException &e)
	{
		std::cerr << e.what() << '\n';
		return false;
	}
	return true;
}

// Exceptions
const char * Form::GradeTooLowException::what() const throw()
{
	return "Error: Form: Grade too low";
}
const char * Form::GradeTooHighException::what() const throw()
{
	return "Error: Form: Grade too high";
}

bool Form::require(const Bureaucrat & executor) const
{
	if (executor.getGrade() > this->getToRun())
	{
		std::cout << "Grade too low to Run " << this->getName() << ", sorry " << executor.getName() << std::endl;
		return false;
	}
	else if (this->getSigned() == false)
	{
		std::cout << this->getName() << "Form is not signed " << ", sorry " << executor.getName() << std::endl;
		return false;
	}
	return true;
}

std::ostream	&operator<<(std::ostream &out, const Form &src){
	out << "Form: " << src.getName() << " | signed " << src.getSigned() << " | grade to sign " << src.getToSign() << " | grade to run " << src.getToRun();
	return out;
}