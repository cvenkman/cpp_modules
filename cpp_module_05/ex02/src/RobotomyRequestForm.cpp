#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
	Form("RobotomyRequestForm", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string const _target) :
	Form("RobotomyRequestForm", 72, 45), target(_target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) :
	Form(obj) {
	std::cout << "RobotomyRequestForm: Copy constructor for "
		<< this->name << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator= (const RobotomyRequestForm& obj) {
	const_cast<std::string &>(this->name) = obj.name;
	this->is_form_signed = obj.is_form_signed;
	const_cast<short int &>(grade_to_sign) = obj.grade_to_sign;
	const_cast<short int &>(grade_to_execute) = obj.grade_to_execute;
	std::cout << "RobotomyRequestForm: operator= for " 
		<< this->name << std::endl;
	return *this;
}

void RobotomyRequestForm::executeAction() const {
	std::srand(std::time(nullptr));
	std::cout << "* drilling noises *\n";
	if ((std::rand() % 100) > 50)
		std::cout << this->target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->target << " has't been robotomized" << std::endl;
}
