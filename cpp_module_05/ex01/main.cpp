#include "Bureaucrat.hpp"

void createAndTestNewBureaucrat(std::string name, int grade) {
	Bureaucrat *bureaucrat = new Bureaucrat(name, grade);
	std::cout << *bureaucrat;
	try
	{
		bureaucrat->incrementGrade();
		std::cout << "after increment " << bureaucrat->getGrade() << std::endl;
		bureaucrat->decrementGrade();
		std::cout << "after decrement " << bureaucrat->getGrade() << std::endl;
		bureaucrat->decrementGrade();
		std::cout << "after decrement " << bureaucrat->getGrade() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	bureaucrat->incrementGrade();
	std::cout << "after increment " << bureaucrat->getGrade() << std::endl;
	delete bureaucrat;
	std::cout << "------------\n";
}

int main() {
	try
	{
		createAndTestNewBureaucrat("Igor", 150);
		createAndTestNewBureaucrat("Igor", 160);
	}
	catch (Bureaucrat::GradeTooLowException const& error)
	{
		std::cerr << "Error: " << error.what() << " | " << error.getName()
			<< " with grade " << error.getGrade() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException const& error)
	{
		std::cerr << "Error: " << error.what() << " | " << error.getName()
			<< " with grade " << error.getGrade() << std::endl;
	}
	std::cout << "------------\n";
	try
	{
		createAndTestNewBureaucrat("Igor", 0);
	}
	catch (std::exception const& error)
	{
		std::cerr << "Error: " << error.what() << std::endl;
	}

}