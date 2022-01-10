#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
	Form("ShrubberyCreationForm", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const _target) :
	Form("ShrubberyCreationForm", 145, 137), target(_target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) :
	Form(obj) {
	std::cout << "ShrubberyCreationForm: Copy constructor for "
		<< this->name << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator= (const ShrubberyCreationForm& obj) {
	const_cast<std::string &>(this->name) = obj.name;
	this->is_form_signed = obj.is_form_signed;
	const_cast<short int &>(grade_to_sign) = obj.grade_to_sign;
	const_cast<short int &>(grade_to_execute) = obj.grade_to_execute;
	std::cout << "ShrubberyCreationForm: operator= for " 
		<< this->name << std::endl;
	return *this;
}

void ShrubberyCreationForm::executeAction() const {
	std::ofstream file(this->target + "_shrubbery");
	if (!file.is_open())
		std::cout << "failed to open the " << this->target +  "_shrubbery file\n";
	file << "            x\n" <<
			"           xxx\n" <<
			"          xxxxx\n" <<
			"        xxxxxxxxx\n" <<
			"      xxxxxxxxxxxxx\n" <<
			"       xxxxxxxxxxx\n" <<
			"     xxxxxxxxxxxxxxx\n" <<
			"   xxxxxxxxxxxxxxxxxxxx\n" <<
			"     xxxxxxxxxxxxxxxx\n" <<
			"  xxxxxxxxxxxxxxxxxxxxxx\n" <<
			"xxxxxxxxxxxxxxxxxxxxxxxxxx\n" <<
			"         #######\n" <<
			"         #######\n" <<
			"         #######\n";
	file.close();
}
