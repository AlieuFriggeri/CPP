#include "../headers/Bureaucrat.hpp"

// Constructors
Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
	//std::cout << "\e[0;33mDefault Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
	//std::cout << "\e[0;33mCopy Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name), _grade(grade)
{
	try
	{
		if (grade > 150)
			throw(Bureaucrat::GradeTooLowException());
		else if (grade < 1)
			throw (Bureaucrat::GradeTooHighException());
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << '\n';
	}
	//std::cout << "\e[0;33mFields Constructor called of Bureaucrat\e[0m" << std::endl;
}


// Destructor
Bureaucrat::~Bureaucrat()
{
	//std::cout << "\e[0;31mDestructor called of Bureaucrat\e[0m" << std::endl;
}


// Operators
Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign)
{
	if (this != &assign)
		*this = assign;
	return *this;
}


// Getters / Setters
int Bureaucrat::getGrade() const
{
	return this->_grade;
}

std::string Bureaucrat::getName(void) const
{
	return this->_name;
}

void	Bureaucrat::gradeup(void)
{
	this->_grade -= 1;
}

void	Bureaucrat::gradedown(void)
{
	this->_grade += 1;
}

void  Bureaucrat::signForm(const Form &src){
	if (src.getSigned() == 0)
		std::cout << this->getName() << " signed " << src.getName() << std::endl;
	else
		std::cout << this->getName() << " couldn't sign " << src.getName() << " because his grade is too low" << std::endl;
}

std::ostream&   operator<<( std::ostream& o, const Bureaucrat& rhs )
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}
// exceptions
