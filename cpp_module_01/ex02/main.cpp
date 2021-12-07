// Demonstrates the reference and pointer
#include <iostream>
#include <string>
#include <iomanip>

int main() {
	std::string brain = "HI THIS IS BRAIN"; // string
	std::string *brain_addr = &brain; // stringPTR
	std::string& brain_ref = brain; //  stringREF

	std::cout << std::left << std::setw(40) << "string: " << brain << std::endl;
	std::cout << std::setw(40) << "address in memory: " << &brain << std::endl;
	std::cout << std::setw(40) << "addr in memory (using stringPTR): " << brain_addr << std::endl;
	std::cout << std::setw(40) << "addr in memory (using stringREF): " << &brain_ref << std::endl;
	std::cout << std::setw(40) << "string (using pointer): " << *brain_addr << std::endl;
	std::cout << std::setw(40) << "string (using reference): " << brain_ref << std::endl;
}
