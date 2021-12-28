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
	if (grade > 150 || grade < 1)
		throw "error grade";
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
	const_cast<std::string &>(this->name) = obj.name;
	return *this;
}

const std::string& Bureaucrat::getName(void) const {return name; }
const short int& Bureaucrat::getGrade(void) const {return grade; }

void Bureaucrat::incrementGrade(void) {
	if (grade < 150)
		this->grade++;
}

void Bureaucrat::decrementGrade(void) {
	if (grade > 0)
		this->grade--;
}