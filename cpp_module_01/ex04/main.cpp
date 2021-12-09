#include "Replace.hpp"

static void error(std::string error_str) {
	std::cerr << error_str << std::endl;
	std::exit(EXIT_FAILURE);
}

int main(int argc, char **argv) {
	if (argc != 4)
		error("arg error");
	std::string file(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	if (s1.empty() || s2.empty())
		error("empty string");

	std::ifstream file_read(file);
	if (!file_read.is_open())
		error("file error");
	// std::ofstream file_write()
	// std::cout << std::for_each(file.begin(), file.end(), toupper) << std::endl;
	// std::string h;
	// std::cin >> h;
	// file >> h;
	file_read.close();
	return 0;
}
