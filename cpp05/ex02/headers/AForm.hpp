#ifndef AForm_HPP
# define AForm_HPP

# include <iostream>
# include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		// Constructors
		AForm(const AForm &copy);
		AForm(std::string name, bool sign, int toSign, int toRun);
		
		// Destructor
		virtual ~AForm();
		
		// Operators
		AForm & operator=(const AForm &assign);
		
		// Getters / Setters
		virtual std::string getName() const;
		bool getSigned() const;
		int getToSign() const;
		int getToRun() const;
		void beSigned(void);
		
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
//std::ostream	&operator<<(std::ostream &out, const AForm src);
#endif