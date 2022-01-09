#include "Bureaucrat.hpp"

int main() {
	{
		try
		{
			Form *form = new Form("error_form", 0, 1);
			Bureaucrat *igor = new Bureaucrat("Igor", 40);
			igor->signForm(form);
			delete form;
			delete igor;
		}
		catch (std::exception &ex)
		{
			std::cout << ex.what() << std::endl;
		}
	}
	std::cout << "-----------------\n";
	{
		try
		{
			Bureaucrat igor("Igor", 40);
			Form form("simple_form", 140, 140);
			std::cout << igor << std::endl;
			std::cout << form << std::endl;
			igor.signForm(&form);
			igor.signForm(&form);
		}
		catch (std::exception &ex)
		{
			std::cout << ex.what() << std::endl;
		}
	}
	std::cout << "-----------------\n";
	{
		try
		{
			// Bureaucrat igor("Igor", 160);
			Bureaucrat igor("Igor", 150);
			Form form("simple_form", 140, 140);
			std::cout << igor << std::endl;
			std::cout << form << std::endl;
			igor.signForm(&form);
		}
		catch (std::exception &ex)
		{
			std::cout << "catch block\n";
			std::cout << ex.what() << std::endl;
		}
	}
}