#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("nameless"), grade(150) {}

Bureaucrat::Bureaucrat(std::string _name, short int _grade) :
	name(_name), grade(_grade) {
	if (grade < 1)
		throw GradeTooHighException(this->name, this->grade);
	if (grade > 150)
		throw GradeTooLowException(this->name, this->grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) {
	*this = obj;
	std::cout << "Bureaucrat: Copy constructor for "
	<< name << std::endl;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator= (const Bureaucrat& obj) {
	if (this->name != obj.name)
		const_cast<std::string &>(this->name) = obj.name;
	return *this;
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat& obj)
{
    out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return out;
}

const std::string& Bureaucrat::getName(void) const {return name; }
const short int& Bureaucrat::getGrade(void) const {return grade; }

void Bureaucrat::incrementGrade(void) {
	if (grade <= 0)
		throw GradeTooHighException(this->name, this->grade);
	this->grade--;
}

void Bureaucrat::decrementGrade(void) {
	if (grade >= 150)
		throw GradeTooLowException(this->name, this->grade);
	this->grade++;
}

void Bureaucrat::signForm(Form *form) {
	if (form->getIsFormSigned() == true) {
		std::cout << "form is already signed\n";
		return;
	}
	form->beSigned(this);
	std::cout << this->name << " signs " << form->getName() << std::endl;
}

void Bureaucrat::executeForm(Form const &form) {
	form.execute(*this);
	if (form.getIsFormSigned() == true)
		std::cout << this->name << " executes " << form.getName() << std::endl;
}

/**
 *  GradeTooLowException class
*/
Bureaucrat::GradeTooLowException::GradeTooLowException(std::string const& _name, int const& grade) :
	name(_name), grade(grade) {}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Bureaucrat grade too low";
}

std::string const& Bureaucrat::GradeTooLowException::getName() const {
	return this->name;
}

int const& Bureaucrat::GradeTooLowException::getGrade() const {
	return this->grade;
}

/**
 *  GradeTooHighException class
*/
Bureaucrat::GradeTooHighException::GradeTooHighException(std::string const& _name, int const& grade) :
	name(_name), grade(grade) {}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Bureaucrat grade too high";
}

std::string const& Bureaucrat::GradeTooHighException::getName() const {
	return this->name;
}

int const& Bureaucrat::GradeTooHighException::getGrade() const {
	return this->grade;
}
