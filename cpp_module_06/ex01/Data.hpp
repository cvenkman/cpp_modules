#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <string>
#include <iomanip>

struct Data {
	int number;
	char symbol;
	std::string string;
};

uintptr_t serialize(Data *ptr);
Data* deserialize(uintptr_t raw);

#endif
