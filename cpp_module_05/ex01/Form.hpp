#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	std::string const name;
	bool is_form_signed;
	short int const grade_to_sign;
	short int const grade_to_execute;

public:
	class GradeTooHighException : public std::exception {
		private:
			std::string msg;
			Form *form;
		public:
			GradeTooHighException(Form &_form);
			~GradeTooHighException() throw();
			const char* what() const throw();
			std::string const& getName() const;
			short int const& getGradeToSign() const;
			short int const& getGradeToExecute() const;
	};

	class GradeTooLowException : public std::exception {
		private:
			std::string msg;
			Form *form;
		public:
			GradeTooLowException(Form &_form);
			~GradeTooLowException() throw();
			const char* what() const throw();
			std::string const& getName() const;
			short int const& getGradeToSign() const;
			short int const& getGradeToExecute() const;
	};

public:
	Form();
	Form(std::string _name);
	Form(std::string _name, short int grade_to_sign, short int grade_to_execute);
	Form(const Form &obj);
	~Form();
	Form& operator= (const Form& obj);
	std::string const& getName() const;
	bool const& getIsFormSigned() const;
	short int const& getGradeToSign() const;
	short int const& getGradeToExecute() const;
	void beSigned(Bureaucrat const *bureaucrat);
};

std::ostream& operator<<(std::ostream &out, const Form& obj);

#endif
