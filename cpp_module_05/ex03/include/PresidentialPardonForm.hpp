#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class PresidentialPardonForm : public Form{
private:
	std::string const target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string _target);
	PresidentialPardonForm(const PresidentialPardonForm &obj);
	~PresidentialPardonForm();
	PresidentialPardonForm& operator= (const PresidentialPardonForm& obj);
	void executeAction() const;
	Form* duplicateForm(std::string const target);
};

std::ostream& operator<<(std::ostream &out, const Form& obj);

#endif
