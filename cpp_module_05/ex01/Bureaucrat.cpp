#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("nameless"), grade(150) {
	std::cout << "Bureaucrat: Default constructor\n";
}

Bureaucrat::Bureaucrat(std::string _name) :
	name(_name), grade(150) {
	std::cout << "Bureaucrat: constructor with name for "
		<< name << std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, short int _grade) :
	name(_name), grade(_grade) {
	if (grade < 1)
		throw GradeTooHighException(this->name, this->grade);
	if (grade > 150)
		throw GradeTooLowException(this->name, this->grade);
	std::cout << "Bureaucrat: constructor with name for "
		<< name << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) {
	*this = obj;
	std::cout << "Bureaucrat: Copy constructor for "
	<< name << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat: Destructor for "
	<< name << std::endl;
}

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
	try
	{
		form->beSigned(this);
		std::cout << this->name << " signs "
			<< form->getName() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << this->name << " cannot sign "
		<< form->getName() << " because " << e.what();
	}
	// if (this->grade < form->getGradeToSign()) {
	// 	// if (form->getIsFormSigned() == true) {
	// 		std::cout << this->name << " signs "
	// 			<< form->getName() << std::endl;
	// 	// }
	// }
	// else {
		// std::cout << this->name << " cannot sign "
		// 	<< form->getName() << " because ";
	// }
}

// GradeTooLowException class
Bureaucrat::GradeTooLowException::GradeTooLowException(std::string const& _name, int const& grade) :
	name(_name), grade(grade) {
	// std::cout << "GradeTooLowException constructor\n";
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {
	// std::cout << "GradeTooLowException destructor\n";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Bureaucrat grade too low";
}

std::string const& Bureaucrat::GradeTooLowException::getName() const {
	return this->name;
}

int const& Bureaucrat::GradeTooLowException::getGrade() const {
	return this->grade;
}

// GradeTooHighException class
Bureaucrat::GradeTooHighException::GradeTooHighException(std::string const& _name, int const& grade) :
	name(_name), grade(grade) {
	// std::cout << "GradeTooHighException constructor\n";
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {
	// std::cout << "GradeTooHighException destructor\n";
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Bureaucrat grade too high";
}

std::string const& Bureaucrat::GradeTooHighException::getName() const {
	return this->name;
}

int const& Bureaucrat::GradeTooHighException::getGrade() const {
	return this->grade;
}
