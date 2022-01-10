#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form{
private:
	std::string const target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string _target);
	ShrubberyCreationForm(const ShrubberyCreationForm &obj);
	~ShrubberyCreationForm();
	ShrubberyCreationForm& operator= (const ShrubberyCreationForm& obj);
	void executeAction() const;
	Form* duplicateForm(std::string const target);
};

std::ostream& operator<<(std::ostream &out, const Form& obj);

#endif
