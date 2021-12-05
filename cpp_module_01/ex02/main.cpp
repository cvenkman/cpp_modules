#include <iostream>
#include <string>
#include <iomanip>

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string *str_addr = &str;

	std::cout << std::left << std::setw(30) << "string: " << str << std::endl;
	std::cout << std::setw(30) << "address in memory: " << &str << std::endl;
	std::cout << std::setw(30) << "also address in memory: " << str_addr << std::endl;
}