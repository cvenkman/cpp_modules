#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include <fstream>
#include "Bureaucrat.hpp"

#define SIGN 0
#define EXECUTE 1

class Bureaucrat;

class Form {
protected:
	std::string const name;
	bool is_form_signed;
	short int const grade_to_sign;
	short int const grade_to_execute;

public:
	Form();
	Form(std::string _name);
	Form(std::string _name, short int grade_to_sign, short int grade_to_execute);
	Form(const Form &obj);
	virtual ~Form();
	Form& operator= (const Form& obj);
	std::string const& getName() const;
	bool const& getIsFormSigned() const;
	short int const& getGradeToSign() const;
	short int const& getGradeToExecute() const;
	void beSigned(Bureaucrat const *bureaucrat);
	virtual void executeAction() const = 0;
	void execute(Bureaucrat const &executor) const;
	
	class GradeTooHighException : public std::exception {
		private:
			std::string msg;
			const Form *form;
		public:
			GradeTooHighException(const Form &_form);
			~GradeTooHighException() throw();
			const char* what() const throw();
			std::string const& getName() const;
			short int const& getGradeToSign() const;
			short int const& getGradeToExecute() const;
	};

	class GradeTooLowException : public std::exception {
		private:
			std::string msg;
			const Form *form;
		public:
			GradeTooLowException(Form &_form);
			GradeTooLowException(Form const &_form, std::string bureaucrat_msg, bool what_to_do);
			~GradeTooLowException() throw();
			const char* what() const throw();
			std::string const& getName() const;
			short int const& getGradeToSign() const;
			short int const& getGradeToExecute() const;
	};

};

std::ostream& operator<<(std::ostream &out, const Form& obj);

#endif
