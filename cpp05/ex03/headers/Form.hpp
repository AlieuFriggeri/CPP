#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		// Constructors
		Form(const Form &copy);
		Form(std::string name, bool sign, int toSign, int toRun);
		
		// Destructor
		virtual ~Form();
		
		// Operators
		virtual Form & operator=(const Form &assign);
		
		// Getters / Setters
		std::string getName() const;
		bool getSigned() const;
		int getToSign() const;
		int getToRun() const;
		bool beSigned(const Bureaucrat &src);
		virtual bool execute(Bureaucrat const & executor) const = 0;
		
		// Exceptions
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		bool require(const Bureaucrat &src) const;
	private:
		Form();
		std::string _name;
		bool _signed;
		int _toSign;
		int _toRun;
		
};
std::ostream	&operator<<(std::ostream &out, const Form &src);
#endif