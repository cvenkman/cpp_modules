#include "Bureaucrat.hpp"

int main() {
	{
		try
		{
			Bureaucrat *bureaucrat = new Bureaucrat("Igor");
			std::cout << bureaucrat->getName() << " " <<
				bureaucrat->getGrade() << std::endl;
			bureaucrat->incrementGrade();
			std::cout << "increment " << bureaucrat->getGrade() << std::endl;
			bureaucrat->decrementGrade();
			std::cout << "decrement " << bureaucrat->getGrade() << std::endl;
			bureaucrat->incrementGrade();
			std::cout << "increment " << bureaucrat->getGrade() << std::endl;
			delete bureaucrat;
		}
		catch (char const* error)
		{
			std::cout << "Error: " << error << std::endl;
		}
	}
	std::cout << "------------\n";
	{
		try
		{
			Bureaucrat *bureaucrat = new Bureaucrat("Igor", 160);
			std::cout << bureaucrat->getName() << " " <<
				bureaucrat->getGrade() << std::endl;
			bureaucrat->incrementGrade();
			delete bureaucrat;
		}
		catch (char const* error)
		{
			std::cout << "Error: " << error << std::endl;
		}
	}
	std::cout << "------------\n";
	{
		try
		{
			Bureaucrat *bureaucrat = new Bureaucrat("Igor", -1);
			std::cout << bureaucrat->getName() << " " <<
				bureaucrat->getGrade() << std::endl;
			delete bureaucrat;
		}
		catch (char const* error)
		{
			std::cout << "Error: " << error << std::endl;
		}
	}
}