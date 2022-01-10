#include "../include/Intern.hpp"

Intern::Intern() {
	this->forms_function_array[0] = new PresidentialPardonForm();
	this->forms_function_array[1] = new RobotomyRequestForm();
	this->forms_function_array[2] = new ShrubberyCreationForm();
}

Intern::~Intern() {}

Form* Intern::makeForm(std::string const& form_name, std::string const& target) {
	std::string form_name_array[4] = {"presidential pardon",
		"robotomy request", "shrubbery creation", ""};
	int i = 0;
	for (; i < 3 && form_name_array[i] != form_name; i++) {}
	if (form_name_array[i] == "") {
		std::cout << "no such form\n";
		return (nullptr);
	}
	std::cout << "Intern creates " << form_name << std::endl;
	return (this->forms_function_array[i]->duplicateForm(target));
}