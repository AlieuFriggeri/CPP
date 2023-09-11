#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		// Constructors
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		
		// Destructor
		~RobotomyRequestForm();
		
		// Operators
		RobotomyRequestForm & operator=(const RobotomyRequestForm &assign);
		virtual bool execute(Bureaucrat const &executor) const;
		
	private:
		std::string _target;
};

#endif