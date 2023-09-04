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
		Form();
		Form(const Form &copy);
		Form(std::string name, bool sign, int toSign, int toRun);
		
		// Destructor
		~Form();
		
		// Operators
		Form & operator=(const Form &assign);
		
		// Getters / Setters
		std::string getName() const;
		bool getSigned() const;
		int getToSign() const;
		int getToRun() const;
		void beSigned(const Bureaucrat &src);
		
		// Exceptions
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		
	private:
		std::string _name;
		bool _signed;
		int _toSign;
		int _toRun;
		
};
std::ostream	&operator<<(std::ostream &out, const Form src);
#endif