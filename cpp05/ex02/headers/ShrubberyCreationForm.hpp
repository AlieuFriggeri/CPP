#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
#include <fstream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		// Constructors
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		
		// Destructor
		~ShrubberyCreationForm();
		
		// Operators
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm &assign);
		
		//methods
		virtual bool execute(Bureaucrat const &executor) const;
		std::string getTarget(void) const;
	private:
		std::string _target;
};

#endif