#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Form {
private:
	std::string const name;
	bool is_form_signed;
	short int const grade_to_sign;
	short int const grade_to_execute;

	class GradeTooHighException : public std::exception {
		private:
			std::string const name;
			short int const grade_to_sign;
			short int const grade_to_execute;
		public:
			GradeTooHighException(std::string const& _name, 
				short int const _grade_to_sign,
				short int const _grade_to_execute);
			~GradeTooHighException() throw();
			const char* what() const throw();
			std::string const& getName() const;
			short int const& getGradeToSign() const;
			short int const& getGradeToExecute() const;
	};

	class GradeTooLowException : public std::exception {
		private:
			std::string const name;
			short int const grade_to_sign;
			short int const grade_to_execute;
		public:
			GradeTooLowException(std::string const& _name, 
				short int const _grade_to_sign,
				short int const _grade_to_execute);
			~GradeTooLowException() throw();
			const char* what() const throw();
			std::string const& getName() const;
			short int const& getGradeToSign() const;
			short int const& getGradeToExecute() const;
	};

public:
	Form();
	Form(std::string _name);
	Form(std::string _name, bool _is_signed,
		short int grade_to_sign, short int grade_to_execute);
	Form(const Form &obj);
	~Form();
	std::string const& getName() const;
	bool const& getIsFormSigned() const;
	short int const& getGradeToSign() const;
	short int const& getGradeToExecute() const;
	void beSigned(Bureaucrat *bureaucrat);
};

std::ostream& operator<<(std::ostream &out, const Form& obj);

#endif
