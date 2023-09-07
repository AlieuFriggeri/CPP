#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		// Constructors
		Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat(std::string const & name, int grade);
		
		// Destructor
		~Bureaucrat();
		
		// Operators
		Bureaucrat & operator=(const Bureaucrat &assign);
		
		// Getters / Setters
		int getGrade() const;
		std::string getName() const;

		void gradeup(void);
		void gradedown(void);
		void  signForm(const Form &src);
		class GradeTooHighException : public std::exception{
			public:
				virtual const char* what() const throw() {return "grade too high";}
		};
		class GradeTooLowException : public std::exception{
			public:
				virtual const char* what() const throw() {return "grade too low";}
		};
		private:

		const std::string _name;
		int _grade;
		
};

std::ostream&	operator<<(std::ostream & o, const Bureaucrat & bureaucrat);
#endif