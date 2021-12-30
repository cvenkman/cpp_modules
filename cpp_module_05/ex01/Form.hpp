#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>

class Form {
private:
	std::string const name;
	bool is_form_signed;
	short int const grade_to_sign;
	short int const grade_to_execute;
	class GradeTooHighException : public std::exception {
		GradeTooHighException();
		~GradeTooHighException() throw();
		const char* what() const throw();
	};

public:
	Form();
	Form(std::string _name);
	Form(std::string _name, bool _is_signed,
		short int grade_to_sign, short int grade_to_execute);
	~Form();
	std::string const& getName();
	bool const& getIsFormSigned();
	short int const& getGradeToSign();
	short int const& getGradeToExecute();
};

std::ostream& operator<<(std::ostream &out, const Form& obj);

#endif
