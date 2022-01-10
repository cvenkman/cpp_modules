#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"
#include <unistd.h>

class RobotomyRequestForm : public Form {
private:
	std::string const target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string _target);
	RobotomyRequestForm(const RobotomyRequestForm &obj);
	~RobotomyRequestForm();
	RobotomyRequestForm& operator= (const RobotomyRequestForm& obj);
	void executeAction() const;
	Form* duplicateForm(std::string const target);
};

std::ostream& operator<<(std::ostream &out, const Form& obj);

#endif
