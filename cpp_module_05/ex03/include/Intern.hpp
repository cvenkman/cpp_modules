#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
private:
	Form *forms_function_array[3];
public:
	Intern();
	~Intern();
	Form* makeForm(std::string const& form_name, std::string const& target);
};

#endif
