#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
	Form("PresidentialPardonForm", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string const _target) :
	Form("PresidentialPardonForm", 25, 5), target(_target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) :
	Form(obj) {
	std::cout << "PresidentialPardonForm: Copy constructor for "
		<< this->name << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm& PresidentialPardonForm::operator= (const PresidentialPardonForm& obj) {
	const_cast<std::string &>(this->name) = obj.name;
	this->is_form_signed = obj.is_form_signed;
	const_cast<short int &>(grade_to_sign) = obj.grade_to_sign;
	const_cast<short int &>(grade_to_execute) = obj.grade_to_execute;
	std::cout << "PresidentialPardonForm: operator= for " 
		<< this->name << std::endl;
	return *this;
}

void PresidentialPardonForm::executeAction() const {
	std::cout << this->target
		<< " has been pardoned by Zafod Beeblebrox\n";
}
