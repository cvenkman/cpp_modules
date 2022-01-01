#include "Form.hpp"

Form::Form() : name("nameless_form"), is_form_signed(false),
	grade_to_sign(1), grade_to_execute(1) {
	std::cout << "Form constructor\n";
}


Form::Form(std::string _name) : name(_name),
	is_form_signed(false), grade_to_sign(1), grade_to_execute(1) {
	std::cout << "Form constructor\n";
}

Form::Form(std::string _name, bool _is_signed,
	short int _grade_to_sign, short int _grade_to_execute) :
		name(_name), is_form_signed(_is_signed),
		grade_to_sign(_grade_to_sign), grade_to_execute(_grade_to_execute) {
	if (grade_to_execute < 1 || grade_to_sign < 1)
		throw GradeTooHighException(name, grade_to_sign, grade_to_execute);
	// if (grade_to_execute > 150 || grade_to_sign > 150)
		// throw;
	std::cout << "Form constructor\n";
}

Form::Form(const Form &obj) : grade_to_sign(obj.grade_to_sign),
	grade_to_execute(obj.grade_to_execute) {
	*this = obj;
	std::cout << "Form: Copy constructor for "
	<< name << std::endl;
}

Form::~Form() { std::cout << "Form destructor\n"; }


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
    out << obj.getName() << " , is form signed: " << obj.getIsFormSigned()
	<< "; grade to signed: " << obj.getGradeToSign()
	<< "; grade to execute: " << obj.getGradeToExecute() << std::endl;
    return out;
}

void Form::beSigned(Bureaucrat *bureaucrat) {
	if (bureaucrat->getGrade() < this->grade_to_sign) {
		this->is_form_signed = true;
		std::cout << "Form " << this->name << " is signed\n";
	}
	else
		throw GradeTooLowException();
}

// GradeTooHighException class
Form::GradeTooHighException::GradeTooHighException(std::string const& _name, 
		short int const _grade_to_sign, short int const _grade_to_execute) : 
	name(_name), grade_to_sign(_grade_to_sign), grade_to_execute(_grade_to_execute) {}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

const char* Form::GradeTooHighException::what() const throw() {
	if (this->grade_to_sign < 1)
		return "Form grade to sign too hight, must be above zero\n";
	else if (this->grade_to_execute < 1)
		return "Form grade to execute too hight, must be above zero\n";
}

std::string const& Form::GradeTooHighException::getName() const {
	return this->name;
}
short int const& Form::GradeTooHighException::getGradeToSign() const {
	return this->grade_to_sign;
}
short int const& Form::GradeTooHighException::getGradeToExecute() const {
	return this->grade_to_execute;
}

// GradeTooLowException class
Form::GradeTooLowException::GradeTooLowException(std::string const& _name, 
		short int const _grade_to_sign, short int const _grade_to_execute) : 
	name(_name), grade_to_sign(_grade_to_sign), grade_to_execute(_grade_to_execute) {}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

const char* Form::GradeTooLowException::what() const throw() {
	if (this->grade_to_sign > 150)
		return "Form grade to sign too low, must be above zero\n";
	else if (this->grade_to_execute > 150)
		return "Form grade to execute too low, must be above zero\n";
}

std::string const& Form::GradeTooLowException::getName() const {
	return this->name;
}
short int const& Form::GradeTooLowException::getGradeToSign() const {
	return this->grade_to_sign;
}
short int const& Form::GradeTooLowException::getGradeToExecute() const {
	return this->grade_to_execute;
}
