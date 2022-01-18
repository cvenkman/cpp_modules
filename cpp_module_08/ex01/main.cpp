#include "span.hpp"

int main(void) {
	Span sp(-5);
	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.printVector();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		sp.addNumber(11);
		sp.printVector();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------------\n";

	std::vector<int> v(999998, 1);
	Span large_sp(1000000);
	try
	{
		large_sp.addNumber(v.begin(), v.end());
		large_sp.addNumber(2);
		large_sp.addNumber(0);
		std::cout << large_sp.shortestSpan() << std::endl;
		std::cout << large_sp.longestSpan() << std::endl;
		large_sp.addNumber(v.begin(), v.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
