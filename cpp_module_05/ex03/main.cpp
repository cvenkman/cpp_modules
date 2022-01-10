#include "include/Bureaucrat.hpp"
#include "include/Intern.hpp"

int main() {
	try
	{
		Intern someRandomIntern;
		Form *form = someRandomIntern.makeForm("presidential pardon", "Marvin the Paranoid Android");
		// Form *form = someRandomIntern.makeForm("robotomy request", "cat");
		// Form *form = someRandomIntern.makeForm("shrubbery creation", "cat");
		if (!form)
			return 0;
		Bureaucrat *igor = new Bureaucrat("igor", 1);
		igor->signForm(form);
		igor->executeForm(*form);
		delete form;
		delete igor;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
