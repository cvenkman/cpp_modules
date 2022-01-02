#include "Bureaucrat.hpp"

// void createAndTestNewBureaucrat(std::string name, int grade) {
// 	Bureaucrat *bureaucrat = new Bureaucrat(name, grade);
// 	std::cout << *bureaucrat;
// 	try
// 	{
// 		bureaucrat->incrementGrade();
// 		std::cout << "after increment " << bureaucrat->getGrade() << std::endl;
// 		bureaucrat->decrementGrade();
// 		std::cout << "after decrement " << bureaucrat->getGrade() << std::endl;
// 		bureaucrat->decrementGrade();
// 		std::cout << "after decrement " << bureaucrat->getGrade() << std::endl;
// 	}
// 	catch (const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// 	bureaucrat->incrementGrade();
// 	std::cout << "after increment " << bureaucrat->getGrade() << std::endl;
// 	delete bureaucrat;
// 	std::cout << "------------\n";
// }

int main() {
	{
		Bureaucrat igor("Igor", 40);
		Form form("simple_form", 140, 140);
		std::cout << igor << std::endl << form << std::endl;
		igor.signForm(&form);
	}
	std::cout << "-----------------\n";
	{
		Bureaucrat igor("Igor", 40);
		Form form("simple_form", 2, 2);
		std::cout << igor << std::endl << form << std::endl;
		igor.signForm(&form);
	}
}