#include "Karen.hpp"

void Karen::debug() {
	std::cout << "DEBUG" << std::endl;
}

void Karen::info() {
	std::cout << "INFO" << std::endl;
}

void Karen::warning() {
	std::cout << "WARNING" << std::endl;
}

void Karen::error() {
	std::cout << "ERROR" << std::endl;
}

void Karen::complain(std::string level) {
	std::string cmd_arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Karen::*ft_pointer[4])() = {&Karen::debug,
		&Karen::info, &Karen::warning, &Karen::error};
	Karen tmp;
	int i = 0;
	// search level in array
	for (; i < 4 && cmd_arr[i] != level; i++) {}
	// call function via function reference
	switch (i) {
		case 0:
			(tmp.*ft_pointer[0])(); break;
		case 1:
			(tmp.*ft_pointer[1])(); break;
		case 2:
			(tmp.*ft_pointer[2])(); break;
		case 3:
			(tmp.*ft_pointer[3])(); break;
		default:
			std::cerr << "no such command" << std::endl;
	}
}
