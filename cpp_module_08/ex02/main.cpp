#include "mutantstack.hpp"
#include <iostream>

int main(void) {
	MutantStack<int> mutant;

	mutant.push(2);
	mutant.push(3);
	mutant.push(8);
	mutant.push(9);
	std::cout << "size: " << mutant.size() << std::endl;
	std::cout << "------------- test iterator:\n";
	MutantStack<int>::iterator it1 = mutant.begin();
	while (it1 != mutant.end()) {
		std::cout << *it1 << " ";
		it1++;
	}
	std::cout << std::endl << "------------- test functions from stack:\n";
	std::cout << "is_empty: " << mutant.empty() << std::endl;
	std::cout << "top: " << mutant.top() << std::endl;
	std::cout << "size: " << mutant.size() << std::endl;
	std::cout << "------------- stack copy constructor:\n";
	std::stack<int> s(mutant);
	std::cout << "stack size: " << s.size() << std::endl;
	s.pop();
	s.push(10);
	s.push(100);
	s.push(1000);
	std::cout << "stack size: " << s.size() << std::endl;
	std::cout << "-------------\n";
	{
		std::cout << "test with float: ";
		MutantStack<float> mutant;
		mutant.push(3.0f);
		mutant.push(2.3535f);
		std::cout << mutant.top() << std::endl;
	}
	{
		std::cout << "test with string: ";
		MutantStack<std::string> mutant;
		mutant.push("cat");
		std::cout << mutant.top() << std::endl;
	}
}
