#include "Karen.hpp"

int main(int argc, char **argv) {
	Karen kar;
	switch (argc) {
		case 1:
			kar.complain("DEBUG");
			kar.complain("INFO");
			kar.complain("WARNING");
			kar.complain("ERROR");
			break;
		case 2:
			kar.complain(argv[1]);
			break;
		default:
			std::cerr << "arg error" << std::endl;
	}
	return 0;
}
