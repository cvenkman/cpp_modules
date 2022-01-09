#include "Form.hpp"

Form::Form() : name("nameless_form"), is_form_signed(false),
	grade_to_sign(1), grade_to_execute(1) {}

Form::Form(std::string _name) : name(_name),
	is_form_signed(false), grade_to_sign(1), grade_to_execute(1) {}

Form::Form(std::string _name, short int _grade_to_sign,
	short int _grade_to_execute) :
		name(_name), is_form_signed(false),
		grade_to_sign(_grade_to_sign), grade_to_execute(_grade_to_execute) {
	if (grade_to_execute < 1 || grade_to_sign < 1)
		throw GradeTooHighException(*this);
	if (grade_to_execute > 150 || grade_to_sign > 150)
		throw GradeTooLowException(*this);
}

Form::Form(const Form &obj) : grade_to_sign(obj.grade_to_sign),
	grade_to_execute(obj.grade_to_execute) {
	*this = obj;
	std::cout << "Form: Copy constructor for "
	<< name << std::endl;
}

Form::~Form() {}

Form& Form::operator= (const Form& obj) {
	const_cast<std::string &>(this->name) = obj.name;
	this->is_form_signed = obj.is_form_signed;
	const_cast<short int &>(grade_to_sign) = obj.grade_to_sign;
	const_cast<short int &>(grade_to_execute) = obj.grade_to_execute;
	return *this;
}

std::string const& Form::getName() const {return name; }
bool const& Form::getIsFormSigned() const {return is_form_signed; }
short int const& Form::getGradeToSign() const {return grade_to_sign; }
short int const& Form::getGradeToExecute() const {return grade_to_execute; }

std::ostream& operator<<(std::ostream &out, const Form& obj)
{
    out << obj.getName() << ", is form signed: " << obj.getIsFormSigned()
	<< "; grade to signed: " << obj.getGradeToSign()
	<< "; grade to execute: " << obj.getGradeToExecute();
    return out;
}

void Form::beSigned(Bureaucrat const *bureaucrat) {
	if (bureaucrat->getGrade() < this->grade_to_sign) {
		this->is_form_signed = true;
	}
	else
		throw GradeTooHighException(*this);
}

/**
 *  GradeTooHighException class
*/
Form::GradeTooHighException::GradeTooHighException(Form &_form) : form(&_form) {
	if (this->form->grade_to_sign < 1)
		this->msg = this->getName() + " grade to sign too high, must be above zero";
	else if (this->form->grade_to_execute < 1)
		this->msg = this->getName() + " grade to execute too high, must be above zero";
	else this->msg =  this->getName() + " grade too high for this bureaucrat";
}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

const char* Form::GradeTooHighException::what() const throw() {
	return this->msg.c_str();
}

std::string const& Form::GradeTooHighException::getName() const {
	return this->form->name;
}
short int const& Form::GradeTooHighException::getGradeToSign() const {
	return this->form->grade_to_sign;
}
short int const& Form::GradeTooHighException::getGradeToExecute() const {
	return this->form->grade_to_execute;
}

/**
 * GradeTooLowException class
*/
Form::GradeTooLowException::GradeTooLowException(Form &_form) : form(&_form) {
	if (this->form->grade_to_sign > 150)
		this->msg = this->getName() + " grade to sign too low, must be above zero";
	else if (this->form->grade_to_execute > 150)
		this->msg = this->getName() + " grade to execute too low, must be above zero";
	else this->msg =  this->getName() + " grade too low";
}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

const char* Form::GradeTooLowException::what() const throw() {
	return this->msg.c_str();
}

std::string const& Form::GradeTooLowException::getName() const {
	return this->form->name;
}
short int const& Form::GradeTooLowException::getGradeToSign() const {
	return this->form->grade_to_sign;
}
short int const& Form::GradeTooLowException::getGradeToExecute() const {
	return this->form->grade_to_execute;
}