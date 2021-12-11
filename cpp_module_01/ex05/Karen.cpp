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
	int i = 0;
	// search level in array
	for (; i < 4 && cmd_arr[i] != level; i++) {}
	if (cmd_arr[i] != level)
		return ;
	// call function via function reference
	void (Karen::*ft_pointer[4])() = {&Karen::debug,
		&Karen::info, &Karen::warning, &Karen::error};
	Karen tmp;
	(tmp.*ft_pointer[i])();
}
