#include "Form.hpp"

Form::Form() : name("nameless"), is_form_signed(false),
	grade_to_sign(1), grade_to_execute(1) {
	std::cout << "Form constructor\n";
}


Form::Form(std::string _name) : name(_name),
	is_form_signed(false), grade_to_sign(1), grade_to_execute(1) {
	std::cout << "Form constructor\n";
}

Form::Form(std::string _name, bool _is_signed,
	short int _grade_to_sign, short int _grade_to_execute) :
		name(_name), is_form_signed(_is_signed),
		grade_to_sign(_grade_to_sign), grade_to_execute(_grade_to_execute) {
	std::cout << "Form constructor\n";
}

Form::~Form() { std::cout << "Form destructor\n"; }

std::string const& Form::getName() {return name; }
bool const& Form::getIsFormSigned() {return is_form_signed; }
short int const& Form::getGradeToSign() {return grade_to_sign; }
short int const& Form::getGradeToExecute() {return grade_to_execute; }

// Form::GradeTooHighException::GradeTooHighException() {

// };

// Form::GradeTooHighException::~GradeTooHighException() throw() {

// };

// std::ostream& operator<<(std::ostream &out, const Form& obj) {
// 	out << 
// }