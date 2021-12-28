#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat {
private:
	const std::string name;
	short int grade;
public:
	Bureaucrat();
	Bureaucrat(std::string _name);
	Bureaucrat(std::string _name, short int _grade);
	Bureaucrat(const Bureaucrat &obj);
	~Bureaucrat();
	Bureaucrat& operator= (const Bureaucrat& obj);
	const std::string& getName(void) const;
	const short int& getGrade(void) const;
	void incrementGrade(void);
	void decrementGrade(void);
};

#endif