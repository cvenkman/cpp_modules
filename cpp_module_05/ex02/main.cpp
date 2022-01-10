#include "include/Bureaucrat.hpp"
#include "include/ShrubberyCreationForm.hpp"
#include "include/RobotomyRequestForm.hpp"
#include "include/PresidentialPardonForm.hpp"

int main() {
	try
	{
		Form *shr_form = new ShrubberyCreationForm("home");
		std::cout << *shr_form << std::endl;
		Bureaucrat *masha = new Bureaucrat("Masha", 140);
		masha->signForm(shr_form);
		try
		{
			masha->executeForm(*shr_form);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		Bureaucrat *second_masha = new Bureaucrat("SecondMasha", 130);
		second_masha->executeForm(*shr_form);
		delete shr_form;
		delete masha;
		delete second_masha;
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	std::cout << "-----------------\n";

	try
	{
		Form *robot_form = new RobotomyRequestForm("doggo");
		Bureaucrat *igor = new Bureaucrat("igor", 1);
		std::cout << *igor << std::endl;
		std::cout << *robot_form << std::endl;
		igor->signForm(robot_form);
		igor->executeForm(*robot_form);
		delete robot_form;
		delete igor;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-----------------\n";

	{
		try
		{
			Form *form = new PresidentialPardonForm("Marvin the Paranoid Android");
			Bureaucrat *igor = new Bureaucrat("igor", 1);
			igor->signForm(form);
			igor->executeForm(*form);
			delete form;
			delete igor;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}
