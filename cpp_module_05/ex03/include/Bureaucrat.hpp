#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat {
private:
	std::string const name;
	short int grade;

public:
	Bureaucrat();
	Bureaucrat(std::string _name, short int _grade);
	Bureaucrat(const Bureaucrat &obj);
	~Bureaucrat();
	Bureaucrat& operator= (const Bureaucrat& obj);
	std::string const& getName() const;
	short int const& getGrade() const;
	void incrementGrade();
	void decrementGrade();
	void signForm(Form *form);
	void executeForm(Form const & form);

	class GradeTooLowException : public std::exception {
		private:
			const std::string name;
			const int grade;
		public:
			GradeTooLowException(std::string const& _name, int const& grade);
			const char* what() const throw();
			~GradeTooLowException() throw();
			virtual std::string const& getName() const;
			virtual int const& getGrade() const;
	};
	class GradeTooHighException : public std::exception {
		private:
			const std::string name;
			const int grade;
		public:
			GradeTooHighException(std::string const& _name, int const& grade);
			const char* what() const throw();
			~GradeTooHighException() throw();
			virtual std::string const& getName() const;
			virtual int const& getGrade() const;
	};
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat& obj);

#endif
