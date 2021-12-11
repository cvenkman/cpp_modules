#include "Karen.hpp"

int main(int argc, char **argv) {
	Karen kar;
	if (argc != 2) {
		std::cerr << "arg error" << std::endl;
		return 1;
	}
	kar.complain(argv[1]);
	return 0;
}
