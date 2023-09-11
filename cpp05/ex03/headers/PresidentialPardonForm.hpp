#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
	public:
		// Constructors
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		
		// Destructor
		~PresidentialPardonForm();
		
		// Operators
		PresidentialPardonForm & operator=(const PresidentialPardonForm &assign);
		virtual bool execute(Bureaucrat const &executor) const;

	private:
		std::string _target;
};

#endif 